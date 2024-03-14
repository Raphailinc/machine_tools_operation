#include "machine.h"
#include "ui_machine.h"
#include "allmachines.h"
#include "changemachine.h"
#include "createmachine.h"
#include "idmachine.h"

Machine::Machine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Machine)
{
    ui->setupUi(this);
    this->setWindowTitle("Станки");
}

Machine::~Machine()
{
    delete ui;
}

void Machine::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
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

