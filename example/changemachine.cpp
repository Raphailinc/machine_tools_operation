#include "changemachine.h"
#include "ui_changemachine.h"

ChangeMachine::ChangeMachine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeMachine)
{
    ui->setupUi(this);
    this->setWindowTitle("Изменение станка");
    ui->statusBar->setText("Это - форма для изменения станка.");
}

ChangeMachine::~ChangeMachine()
{
    delete ui;
}

void ChangeMachine::on_pushButton_clicked()
{
    Machine_list machine_list = Machine_list();

    QString _id = ui->_id->text();
    QString _state = ui->_state->text();
    QString _belt_wear = ui->_belt_wear->text();
    QString _engine_wear = ui->_engine_wear->text();
    QString _speed_engine = ui->_speed_engine->text();

    const_cast<_Machine*>(machine_list.get_by_id(std::stoi(_id.toStdString())))->change(_id, _state, _belt_wear,
                                                                                        _engine_wear, _speed_engine);
    machine_list.save();

    ui->statusBar->setText("Станок успешно изменен.");
    ui->statusBar->setStyleSheet("color: green");
}
