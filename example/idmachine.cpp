#include "idmachine.h"
#include "ui_idmachine.h"

IdMachine::IdMachine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IdMachine)
{
    ui->setupUi(this);
    this->setWindowTitle("Станок по id");
}

IdMachine::~IdMachine()
{
    delete ui;
}

void IdMachine::on_pushButton_clicked()
{
    Machine_list machine_list = Machine_list();

    QString id = ui->id->text();

    const uint16_t machine_id = std::stoi(id.toStdString());
    const _Machine* machine = machine_list.get_by_id(machine_id);

    if (machine == nullptr)
    {
        ui->statusBar->setText("Станка по данному id не существует!");
        ui->statusBar->setStyleSheet("color: red");
    }
    else
    {
        QString result = machine->print();
        ui->data->setText(result);
        ui->statusBar->setText("Станок по данному id найден!");
        ui->statusBar->setStyleSheet("color: green");
    }
}
