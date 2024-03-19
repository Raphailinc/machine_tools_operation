#include "machine.h"
#include "ui_machine.h"
#include "allmachines.h"
#include "changemachine.h"
#include "createmachine.h"
#include "idmachine.h"
#include <QGuiApplication>
#include <QScreen>

Machine::Machine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Machine)
{
    ui->setupUi(this);
    this->setWindowTitle("Станки");

    QScreen *primaryScreen = QGuiApplication::primaryScreen();
    QRect screenGeometry = primaryScreen->geometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

Machine::~Machine()
{
    delete ui;
}

void Machine::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
}

void Machine::on_pushButton_2_clicked()
{
    AllMachines window;
    window.setModal(true);
    window.exec();
}

void Machine::on_pushButton_5_clicked()
{
    IdMachine window;
    window.setModal(true);
    window.exec();
}


void Machine::on_pushButton_3_clicked()
{
    CreateMachine window;
    window.setModal(true);
    window.exec();
}


void Machine::on_pushButton_4_clicked()
{
    ChangeMachine window;
    window.setModal(true);
    window.exec();
}

