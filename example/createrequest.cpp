#include "createrequest.h"
#include "ui_createrequest.h"

CreateRequest::CreateRequest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateRequest)
{
    ui->setupUi(this);
    this->setWindowTitle("Создание запроса");
    ui->statusBar->setText("Это - форма для создания запроса.");
}

CreateRequest::~CreateRequest()
{
    delete ui;
}

void CreateRequest::on_pushButton_clicked()
{
    Request_list rq_list = Request_list();
    Machine_list machine_list = Machine_list();

    QString _id = ui->_id->text();
    QString _email = ui->_email->text();
    QString _phone = ui->_phone->text();
    QString _name = ui->_name->text();
    QString _surname = ui->_surname->text();
    QString _patronymic = ui->_patronymic->text();
    QString _message = ui->_message->text();
    QString _broken_list = ui->_broken_list->text();

    while(true)
    {
        if((_id == nullptr) || (_email == nullptr) || (_phone == nullptr) || (_name == nullptr) ||
                 (_surname == nullptr) || (_patronymic == nullptr))
        {
            if(_id == nullptr)
            {
                ui->war1->setText("Введите данные!");
                ui->war1->setStyleSheet("color: red");
                return;
            }
            else ui->war1->clear();

            if(_email == nullptr)
            {
                ui->war2->setText("Введите данные!");
                ui->war2->setStyleSheet("color: red");
                return;
            }
            else ui->war2->clear();

            if(_phone == nullptr)
            {
                ui->war3->setText("Введите данные!");
                ui->war3->setStyleSheet("color: red");
                return;
            }
            else ui->war3->clear();

            if(_name == nullptr)
            {
                ui->war4->setText("Введите данные!");
                ui->war4->setStyleSheet("color: red");
                return;
            }
            else ui->war4->clear();

            if(_surname == nullptr)
            {
                ui->war5->setText("Введите данные!");
                ui->war5->setStyleSheet("color: red");
                return;
            }
            else ui->war5->clear();

            if(_patronymic == nullptr)
            {
                ui->war6->setText("Введите данные!");
                ui->war6->setStyleSheet("color: red");
                return;
            }
            else ui->war6->clear();

            if(_message == nullptr)
            {
                ui->war7->setText("Введите данные!");
                ui->war7->setStyleSheet("color: red");
                return;
            }
            else
                ui->war7->clear();
        }
        break;
    }

    std::string input = _id.toStdString();
    const uint16_t id_machine = std::stoi(input);
    while(true)
    {
        const _Machine* get_machine = machine_list.get_by_id(id_machine);

        if (get_machine == nullptr)
        {
            std::stringstream storage;
            storage << "Станка с id = " << id_machine << " не существует.";

            QString error = QString::fromStdString(storage.str());
            ui->statusBar->setText(error);
            ui->statusBar->setStyleSheet("color: red");
            return;
        }
        break;
    }

    std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail;
    std::pair<Machine_detail, Machine_state> info_detail;
    std::vector<std::string> global_arguments_input;
    std::vector<std::string> arguments_input;
    input = _broken_list.toStdString();

    while(true)
    {
        global_arguments_input.clear();
        std::istringstream istream(input);
        std::string _tmp;

        while (std::getline(istream, _tmp, ','))
        {
            global_arguments_input.push_back(_tmp);
        }
        if (global_arguments_input.size() == 0)
        {
            std::stringstream storage;
            storage << "Нет списка деталей.";

            QString error = QString::fromStdString(storage.str());
            ui->statusBar->setText(error);
            ui->statusBar->setStyleSheet("color: red");
            return;
        }
        else
        {
            for(size_t i = 0; i < global_arguments_input.size(); i++)
            {
                arguments_input.clear();
                input = global_arguments_input[i];
                std::istringstream istream(input);
                std::string _tmp;
                while (std::getline(istream, _tmp, '|'))
                {
                    arguments_input.push_back(_tmp);
                }
                if (is_number(arguments_input[0]))
                {
                    if (is_number(arguments_input[1]))
                    {
                        uint8_t detail = std::stoi(arguments_input[0]);
                        uint8_t detail_state = std::stoi(arguments_input[1]);
                        if (detail > 1)
                        {
                            std::stringstream storage;
                            storage << "Детали с id = " << detail << " не существует.";

                            QString error = QString::fromStdString(storage.str());
                            ui->statusBar->setText(error);
                            ui->statusBar->setStyleSheet("color: red");
                            return;
                        }
                        if (detail_state > 2)
                        {
                            std::stringstream storage;
                            storage << "Состояния с id = " << detail_state << " не существует.";

                            QString error = QString::fromStdString(storage.str());
                            ui->statusBar->setText(error);
                            ui->statusBar->setStyleSheet("color: red");
                            return;
                        }
                        info_detail.first = Machine_detail(detail);
                        info_detail.second = Machine_state(detail_state);
                        list_broken_detail.push_back(info_detail);
                    }
                    else
                    {
                        ui->statusBar->setText("Неверный ввод id состояния детали.");
                        ui->statusBar->setStyleSheet("color: red");
                        return;
                    }
                }
                else
                {
                    ui->statusBar->setText("Неверный ввод id детали.");
                    ui->statusBar->setStyleSheet("color: red");
                    return;
                }
            }
        }
        break;
    }

    while(true)
    {
        if(_id == nullptr || _email == nullptr || _phone == nullptr || _name == nullptr ||
                 _surname == nullptr || _patronymic == nullptr)
        {
            if(_id == nullptr)
            {
                ui->war1->setText("Введите данные");
                ui->war1->setStyleSheet("color: red");
                return;
            }
            else ui->war1->clear();

            if(_email == nullptr)
            {
                ui->war2->setText("Введите данные");
                ui->war2->setStyleSheet("color: red");
                return;
            }
            else ui->war2->clear();

            if(_phone == nullptr)
            {
                ui->war3->setText("Введите данные");
                ui->war3->setStyleSheet("color: red");
                return;
            }
            else ui->war3->clear();

            if(_name == nullptr)
            {
                ui->war4->setText("Введите данные");
                ui->war4->setStyleSheet("color: red");
                return;
            }
            else ui->war4->clear();

            if(_surname == nullptr)
            {
                ui->war5->setText("Введите данные");
                ui->war5->setStyleSheet("color: red");
                return;
            }
            else ui->war5->clear();

            if(_patronymic == nullptr)
            {
                ui->war6->setText("Введите данные");
                ui->war6->setStyleSheet("color: red");
                return;
            }
            else ui->war6->clear();

            if(_message == nullptr)
            {
                ui->war7->setText("Введите данные");
                ui->war7->setStyleSheet("color: red");
                return;
            }
            else
                ui->war7->clear();
        }
        break;
    }
    rq_list.push_back(_Request(id_machine, _email.toStdString(), _phone.toStdString(), _name.toStdString(), _surname.toStdString(),
                            _patronymic.toStdString(), _message.toStdString(), list_broken_detail));

    ui->statusBar->setText("Запрос успешно добавлен в список запросов.");
    ui->statusBar->setStyleSheet("color: green");
}
