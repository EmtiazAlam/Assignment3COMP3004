#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QSpinBox>
#include <QListWidget>
#include <QGraphicsView>
#include <QTime>
#include <QStatusBar>
#include <QVector>
#include <QtGlobal>
#include <QButtonGroup>

#include "passenger.h"
#include "elevator.h"


/* Class Purpose: The main window of the application, acts as the control of the application
Data Members:
-Ui::MainWindow *ui: A ui pointer for the UI in mainwindow
-QButtonGroup *floorButtonGroup: group all the floor button to access them accordingly
-Passenger* passenger: Create a variable for passenger to refer as an object
-Elevator* elevatorInstance: Create a variable for elevator to refer as an object

Class Functions:
void on_startSystem_clicked(): Changes state to select initial floor for a passenger otherwise disabled
void on_passengerOne_clicked(): Passenger 1 object selected acts as the user of the elevator
void on_passengerTwo_clicked(): Passenger 2 object selected acts as the user of the elevator
void on_passengerThree_clicked(): Passenger 3 object selected acts as the user of the elevator
void on_elevatorFire_clicked(): Informs of an elevator fire to the ECS
void on_helpButton_clicked(): Informs of help request from the elevator to the ECS
void on_openDoor_clicked(): Elevator door open action
void on_closeDoor_clicked(): Elevator door close action
void on_overloadSystem_clicked(): Elevator overload alert
void on_fireSystem_clicked(): Elevator fire alert
void on_poweroutSystem_clicked(): Elevator power out alert
void on_blockSystem_clicked(): Elevator door obstacle alert
void on_initialFloorPick_valueChanged(int value):
void on_upButton_pressed(): Navigate up floor inside the elevator
void on_downButton_pressed(): Navigate down floor inside the elevator
void createFloorButtons(int numFloors): Create the number of floor buttons for inside the elevator based on the parameter
void createElevators(int numElevators): Create the number of elevators based on the parameter
*/
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QButtonGroup *floorButtonGroup;
    Passenger* passenger;
    Elevator* elevatorInstance;

private slots:

    void on_startSystem_clicked();
    void on_passengerOne_clicked();
    void on_passengerTwo_clicked();
    void on_passengerThree_clicked();
    void on_elevatorFire_clicked();
    void on_helpButton_clicked();
    void on_openDoor_clicked();
    void on_closeDoor_clicked();
    void on_overloadSystem_clicked();
    void on_fireSystem_clicked();
    void on_poweroutSystem_clicked();
    void on_blockSystem_clicked();
    void on_initialFloorPick_valueChanged(int value);
    void on_upButton_pressed();
    void on_downButton_pressed();
    void createFloorButtons(int numFloors);
    void createElevators(int numElevators);


};
#endif // MAINWINDOW_H
