#include "createmachine.h"
#include "ui_createmachine.h"

CreateMachine::CreateMachine(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateMachine)
{
    ui->setupUi(this);
    this->setWindowTitle("Создание станка");
    ui->statusBar->setText("Это - форма для создания нового станка.");
}

CreateMachine::~CreateMachine()
{
    delete ui;
}

void CreateMachine::on_pushButton_clicked()
{
    Machine_list machine_list = Machine_list();

    QString _state = ui->_state->text();
    QString _belt_wear = ui->_belt_wear->text();
    QString _engine_wear = ui->_engine_wear->text();
    QString _speed_engine = ui->_speed_engine->text();

    while(true)
    {
        if((_state == nullptr) || (_belt_wear == nullptr) || (_engine_wear == nullptr) || (_speed_engine == nullptr))
        {
            if(_state == nullptr)
            {
                ui->war1->setText("Введите данные!");
                ui->war1->setStyleSheet("color: red");
                return;
            }
            else ui->war1->clear();

            if(_belt_wear == nullptr)
            {
                ui->war2->setText("Введите данные!");
                ui->war2->setStyleSheet("color: red");
                return;
            }
            else ui->war2->clear();

            if(_engine_wear == nullptr)
            {
                ui->war3->setText("Введите данные!");
                ui->war3->setStyleSheet("color: red");
                return;
            }
            else ui->war3->clear();

            if(_speed_engine == nullptr)
            {
                ui->war4->setText("Введите данные!");
                ui->war4->setStyleSheet("color: red");
                return;
            }
            else ui->war4->clear();
        }
        break;
    }

    std::string input = _state.toStdString();
    uint8_t state;
    while (true)
    {
        if (is_number(input))
        {
            state = std::stoi(input);
            if (state > 2)
            {
                ui->statusBar->setText("Данные о состоянии неверно введены.");
                ui->statusBar->setStyleSheet("color: red");
                return;
            }
            break;
        }
    }

    uint64_t belt_wear;
    while (true)
    {
        input = _belt_wear.toStdString();
        if (is_number(input))
        {
            belt_wear = std::stoi(input);
            if (belt_wear > 65535)
            {
                ui->statusBar->setText("Данные о состоянии ремня неверно введены.");
                ui->statusBar->setStyleSheet("color: red");
                return;
            }
            break;
        }
    }

    uint64_t engine_wear;
    while (true)
    {
        input = _engine_wear.toStdString();
        if (is_number(input))
        {
            engine_wear = std::stoi(input);
            if (engine_wear > 65535)
            {
                ui->statusBar->setText("Данные о состоянии двигателя неверно введены.");
                ui->statusBar->setStyleSheet("color: red");
                return;
            }
            break;
        }
    }

    uint64_t speed_engine;
    while (true)
    {
        input = _speed_engine.toStdString();
        if (is_number(input))
        {
            speed_engine = std::stoi(input);
            if (speed_engine > 65535)
            {
                ui->statusBar->setText("Данные о количестве оборотов неверно введены.");
                ui->statusBar->setStyleSheet("color: red");
                return;
            }
            break;
        }
    }

    _Machine new_machine = _Machine((uint16_t)belt_wear,
                                  (uint16_t)engine_wear,
                                  (uint16_t)speed_engine,
                                  (Machine_state)state
    );
    machine_list.push_back(new_machine);

    ui->statusBar->setText("Станок успешно добавлен в список станков.");
    ui->statusBar->setStyleSheet("color: green");
}

