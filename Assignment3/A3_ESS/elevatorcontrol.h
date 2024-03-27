#ifndef ELEVATORCONTROL_H
#define ELEVATORCONTROL_H


#include <QObject>
#include <QButtonGroup>
#include <QPushButton>
#include <QString>

class ElevatorControl : public QObject {
    Q_OBJECT

public:
    explicit ElevatorControl(QObject *parent = nullptr);
    void setNumberOfFloors(int numFloors);

private slots:
    void on_floorButtonClicked(int floor);

private:
    QButtonGroup *floorButtonGroup;
    void clearFloorButtons();
};

#endif // ELEVATORCONTROL_H
