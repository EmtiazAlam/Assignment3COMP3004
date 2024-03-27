#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QTimer>
#include <QLayoutItem>
#include <QVBoxLayout>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);
    ui->startSystem->setStyleSheet("background-color: green;");
    ui->initialFloorPick->setEnabled(false);
    //Set the number of floor buttons
    createFloorButtons(8);
    //Set the number of elevators
    createElevators(3);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createFloorButtons(int numFloors) {
    QVBoxLayout *floorLayout = new QVBoxLayout(ui->centralWidget);
    int requestedFloor = 0;
    for (int floor = 1; floor <= numFloors; ++floor) {
        QPushButton *floorButton = new QPushButton(QString("Floor %1").arg(floor), this);
        // Set properties and connect signals as needed
        floorLayout->addWidget(floorButton);
        connect(floorButton, &QPushButton::clicked, this, [this, floor, &requestedFloor]() {
            qDebug() << "Floor button clicked: " << floor;
            requestedFloor = floor;
            ui->elevatorLCD->display(requestedFloor);
            // Created a timer for when elevator arrives after floor button is clicked to simulate real life action
            QTimer *timer = new QTimer(this);
            // Connect the timeout signal of the timer to a lambda function for elevator arrival
            connect(timer, &QTimer::timeout, this, [timer, requestedFloor]() {
                //Print to console
                qDebug() << "Bell rings";
                qDebug() << "Doors close";
                qDebug() << "Elevator arrives at requested floor: " << requestedFloor; // Output the requested floor
                qDebug() << "Doors opens then closes";
                timer->stop();
                timer->deleteLater();
            });
            // Start the timer with a timeout of 1 second
            timer->start(1000);
        });
    }
}

void MainWindow::createElevators(int numElevators){
    //Create elevator layout to display in UI
    QVBoxLayout *elevatorLayout = new QVBoxLayout(ui->countElevators);
    for (int elevator = 1; elevator <= numElevators; ++elevator){
        QLabel *elevatorsLabel = new QLabel(QString("Elevator %1").arg(elevator));
        //Add to UI
        elevatorLayout->addWidget(elevatorsLabel);
    }
}

void MainWindow::on_startSystem_clicked(){
    //Print to console that start button is clicked
    qDebug() << "Start System Clicked";
    //Enable the qspinbox for initial floor pick
    ui->initialFloorPick->setEnabled(true);
    //set minimum to 0
    ui->initialFloorPick->setMinimum(0);
    //set max a
    ui->initialFloorPick->setMaximum(50);
    ui->initialFloorPick->setValue(0);
    connect(ui->initialFloorPick, QOverload<int>::of(&QSpinBox::valueChanged),this, &MainWindow::on_initialFloorPick_valueChanged);

}

void MainWindow::on_passengerOne_clicked(){
    // Get initial floor and requested floor from UI elements
        int initialFloor = ui->initialFloorPick->value();
        //Create a elevator object
        Elevator elevator(1);
        // Create a Passenger object
        Passenger passenger(1, initialFloor);
        qDebug() << "Elevator:" << elevator.getId();
        qDebug() << "Passenger One created with ID:" << passenger.getPassengerId() << ", Initial Floor:" << passenger.getInitialFloor();

}

void MainWindow::on_passengerTwo_clicked(){
    // Get initial floor and requested floor from UI elements
    int initialFloor = ui->initialFloorPick->value();
    //Create a elevator object
    Elevator elevator(2);
    // Create a Passenger object
    Passenger passenger(2, initialFloor);
    qDebug() << "Elevator:" << elevator.getId();
    qDebug() << "Passenger One created with ID:" << passenger.getPassengerId() << ", Initial Floor:" << passenger.getInitialFloor();

}

void MainWindow::on_passengerThree_clicked(){
    // Get initial floor and requested floor from UI elements
    int initialFloor = ui->initialFloorPick->value();
    Elevator elevator(3);
    // Create a Passenger object
    Passenger passenger(3, initialFloor);
    // Perform any actions with the passenger object
    qDebug() << "Elevator:" << elevator.getId();
    qDebug() << "Passenger One created with ID:" << passenger.getPassengerId() << ", Initial Floor:" << passenger.getInitialFloor();
}

void MainWindow::on_elevatorFire_clicked()
{
    qDebug() << "Elevator Fire alarm!";
    qDebug() << "Moving all elevators to safe floor";
    ui->elevatorDisplay->appendPlainText("RING!");
    ui->elevatorDisplay->appendPlainText("Fire Emergency");
    ui->elevatorDisplay->appendPlainText("Exit once doors open!");
    ui->floorDisplay->setPlainText("Fire Emergency");

}

void MainWindow::on_helpButton_clicked()
{
    qDebug() << "HELP alarm button pressed!";
    qDebug() << "Connecting passenger to building safety service!";
    qDebug() << "NO response 911 call placed!";
    ui->elevatorDisplay->appendPlainText("Connecting to Safety Service");
}

void MainWindow::on_openDoor_clicked()
{
    qDebug() << "Doors open";
    ui->elevatorDisplay->appendPlainText("Opening Door");
}

void MainWindow::on_closeDoor_clicked()
{
    qDebug() << "Doors close";
    ui->elevatorDisplay->appendPlainText("Closing Door");
}

void MainWindow::on_overloadSystem_clicked()
{
    qDebug() << "Overload alarm!";
    qDebug() << "Doors open";
    qDebug() << "Informing elevator.";
    ui->elevatorDisplay->appendPlainText("Overload! Reduce weight.");
}

void MainWindow::on_fireSystem_clicked()
{
    qDebug() << "Building Fire alarm!";
    qDebug() << "Moving all elevators to safe floor";
    ui->elevatorDisplay->appendPlainText("RING!");
    ui->elevatorDisplay->appendPlainText("Fire Emergency");
    ui->elevatorDisplay->appendPlainText("Exit once doors open!");
}


void MainWindow::on_poweroutSystem_clicked()
{
    qDebug() << "Power Out alarm!";
    qDebug() << "Moving all elevators to safe floor";
    ui->elevatorDisplay->appendPlainText("Power Outage");
    ui->elevatorDisplay->appendPlainText("Exit once doors open!");
}


void MainWindow::on_blockSystem_clicked()
{
    qDebug() << "Door light sensor interrpted doors blocked";
    qDebug() << "Doors open";
    ui->elevatorDisplay->appendPlainText("Door Blocked");
}

void MainWindow::on_upButton_pressed()
{
    int floor = ui->initialFloorPick->value();
    qDebug() << "Elevator requested from floor" << floor << "going up";
    int newInitialFloor = ui->initialFloorPick->value();
        ui->initialFloorPick->setValue(newInitialFloor);
        if (passenger != nullptr) {
            // Update the initial floor of the passenger
            passenger->setInitialFloor(newInitialFloor);
        }

    QTimer *timer = new QTimer(this);
    // Connect the timeout signal of the timer to a lambda function for elevator arrival
       connect(timer, &QTimer::timeout, this, [timer]() {
           qDebug() << "Elevator arrived";
           qDebug() << "Bell rings";
           qDebug() << "Doors open";
           timer->stop();
           timer->deleteLater();
       });
       // Start the timer with a timeout of 1 second
       timer->start(1000);
}

void MainWindow::on_downButton_pressed()
{
    int floor = ui->initialFloorPick->value();
    qDebug() << "Elevator requested from floor" << floor << "going down";
    int newInitialFloor = ui->initialFloorPick->value();
        ui->initialFloorPick->setValue(newInitialFloor); // Set the new initial floor value
        if (passenger != nullptr) {
            // Update the initial floor of the passenger
            passenger->setInitialFloor(newInitialFloor);
        }
    QTimer *timer = new QTimer(this);
    // Connect the timeout signal of the timer to a lambda function for elevator arrival
       connect(timer, &QTimer::timeout, this, [timer]() {
           qDebug() << "Elevator arrived";
           qDebug() << "Bell rings";
           qDebug() << "Doors open";
           timer->stop();
           timer->deleteLater();
       });
       // Start the timer with a timeout of 1 second
       timer->start(1000);
}



void MainWindow::on_initialFloorPick_valueChanged(int value)
{
    //qDebug() << "Selected initial floor:" << value;
}



