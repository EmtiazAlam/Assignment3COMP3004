/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *downButton;
    QPushButton *upButton;
    QPushButton *helpButton;
    QPushButton *closeDoor;
    QPushButton *openDoor;
    QLabel *label;
    QPushButton *elevatorFire;
    QLabel *label_2;
    QFrame *line_2;
    QLabel *label_4;
    QLCDNumber *elevatorLCD;
    QTextBrowser *floorDisplay;
    QLabel *label_3;
    QSpinBox *initialFloorPick;
    QFrame *line;
    QPushButton *passengerOne;
    QPushButton *passengerTwo;
    QPushButton *passengerThree;
    QPushButton *overloadSystem;
    QPushButton *poweroutSystem;
    QPushButton *fireSystem;
    QPushButton *blockSystem;
    QPushButton *startSystem;
    QPlainTextEdit *elevatorDisplay;
    QLabel *label_5;
    QWidget *centralWidget;
    QFrame *countElevators;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(628, 583);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        downButton = new QPushButton(centralwidget);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(120, 150, 61, 25));
        upButton = new QPushButton(centralwidget);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(120, 120, 61, 25));
        helpButton = new QPushButton(centralwidget);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));
        helpButton->setGeometry(QRect(200, 430, 101, 25));
        closeDoor = new QPushButton(centralwidget);
        closeDoor->setObjectName(QString::fromUtf8("closeDoor"));
        closeDoor->setGeometry(QRect(200, 390, 101, 31));
        openDoor = new QPushButton(centralwidget);
        openDoor->setObjectName(QString::fromUtf8("openDoor"));
        openDoor->setGeometry(QRect(200, 350, 101, 31));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 20, 121, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        elevatorFire = new QPushButton(centralwidget);
        elevatorFire->setObjectName(QString::fromUtf8("elevatorFire"));
        elevatorFire->setGeometry(QRect(200, 460, 101, 25));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 50, 91, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("DejaVu Sans"));
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(300, -10, 20, 601));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 200, 121, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("DejaVu Sans Mono"));
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        elevatorLCD = new QLCDNumber(centralwidget);
        elevatorLCD->setObjectName(QString::fromUtf8("elevatorLCD"));
        elevatorLCD->setGeometry(QRect(100, 300, 71, 23));
        floorDisplay = new QTextBrowser(centralwidget);
        floorDisplay->setObjectName(QString::fromUtf8("floorDisplay"));
        floorDisplay->setGeometry(QRect(50, 80, 191, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(400, 10, 111, 21));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Liberation Sans"));
        font3.setBold(true);
        font3.setWeight(75);
        label_3->setFont(font3);
        label_3->setCursor(QCursor(Qt::ArrowCursor));
        initialFloorPick = new QSpinBox(centralwidget);
        initialFloorPick->setObjectName(QString::fromUtf8("initialFloorPick"));
        initialFloorPick->setGeometry(QRect(340, 400, 61, 51));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(310, 260, 321, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        passengerOne = new QPushButton(centralwidget);
        passengerOne->setObjectName(QString::fromUtf8("passengerOne"));
        passengerOne->setGeometry(QRect(330, 270, 83, 31));
        passengerTwo = new QPushButton(centralwidget);
        passengerTwo->setObjectName(QString::fromUtf8("passengerTwo"));
        passengerTwo->setGeometry(QRect(330, 310, 83, 31));
        passengerThree = new QPushButton(centralwidget);
        passengerThree->setObjectName(QString::fromUtf8("passengerThree"));
        passengerThree->setGeometry(QRect(330, 350, 83, 31));
        overloadSystem = new QPushButton(centralwidget);
        overloadSystem->setObjectName(QString::fromUtf8("overloadSystem"));
        overloadSystem->setGeometry(QRect(360, 50, 91, 81));
        poweroutSystem = new QPushButton(centralwidget);
        poweroutSystem->setObjectName(QString::fromUtf8("poweroutSystem"));
        poweroutSystem->setGeometry(QRect(360, 150, 91, 81));
        fireSystem = new QPushButton(centralwidget);
        fireSystem->setObjectName(QString::fromUtf8("fireSystem"));
        fireSystem->setGeometry(QRect(470, 50, 91, 81));
        blockSystem = new QPushButton(centralwidget);
        blockSystem->setObjectName(QString::fromUtf8("blockSystem"));
        blockSystem->setGeometry(QRect(470, 150, 91, 81));
        startSystem = new QPushButton(centralwidget);
        startSystem->setObjectName(QString::fromUtf8("startSystem"));
        startSystem->setGeometry(QRect(430, 480, 71, 51));
        startSystem->setAutoFillBackground(false);
        elevatorDisplay = new QPlainTextEdit(centralwidget);
        elevatorDisplay->setObjectName(QString::fromUtf8("elevatorDisplay"));
        elevatorDisplay->setGeometry(QRect(50, 230, 181, 61));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(320, 460, 101, 21));
        centralWidget = new QWidget(centralwidget);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setGeometry(QRect(80, 330, 111, 201));
        countElevators = new QFrame(centralwidget);
        countElevators->setObjectName(QString::fromUtf8("countElevators"));
        countElevators->setGeometry(QRect(470, 280, 131, 181));
        countElevators->setFrameShape(QFrame::StyledPanel);
        countElevators->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 628, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        downButton->setText(QCoreApplication::translate("MainWindow", "DOWN", nullptr));
        upButton->setText(QCoreApplication::translate("MainWindow", "UP", nullptr));
        helpButton->setText(QCoreApplication::translate("MainWindow", "HELP", nullptr));
        closeDoor->setText(QCoreApplication::translate("MainWindow", "CLOSE DOOR", nullptr));
        openDoor->setText(QCoreApplication::translate("MainWindow", "OPEN DOOR", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PASSENGER VIEW", nullptr));
        elevatorFire->setText(QCoreApplication::translate("MainWindow", "FIRE", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Floor Panel", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Elevator Panel", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Control System", nullptr));
        passengerOne->setText(QCoreApplication::translate("MainWindow", "Passenger 1", nullptr));
        passengerTwo->setText(QCoreApplication::translate("MainWindow", "Passenger 2", nullptr));
        passengerThree->setText(QCoreApplication::translate("MainWindow", "Passenger 3", nullptr));
        overloadSystem->setText(QCoreApplication::translate("MainWindow", "Overload", nullptr));
        poweroutSystem->setText(QCoreApplication::translate("MainWindow", "Power Out", nullptr));
        fireSystem->setText(QCoreApplication::translate("MainWindow", "Fire", nullptr));
        blockSystem->setText(QCoreApplication::translate("MainWindow", "Door Block", nullptr));
        startSystem->setText(QCoreApplication::translate("MainWindow", "START", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Set initial Floor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
