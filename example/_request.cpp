#include "_request.h"
#include "allrequests.h"
#include "request_list.h"

int _Request::line;

_Request::_Request()
{
}

_Request::_Request(uint16_t id_machine,
                 const std::string email,
                 const std::string phone,
                 const std::string name,
                 const std::string surname,
                 const std::string patronymic,
                 const std::string message,
                 std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail):
    id_machine{id_machine},
    email{email},
    phone{phone},
    name{name},
    surname{surname},
    patronymic{patronymic},
    message{message},
    list_broken_detail{list_broken_detail}
{
    this->id = request_id_global++;
}

_Request::~_Request()
{
}

void _Request::print(QStandardItemModel *model) const
{
    std::stringstream detail;
    QStandardItem* item = 0;

    item = new QStandardItem(QString("%1 %2 %3").arg(QString::fromStdString(this->surname)).
                             arg(QString::fromStdString(this->name)).arg(QString::fromStdString(this->patronymic)));
    model->setItem(line,0,item);
    item = new QStandardItem(QString::number(this->id));
    model->setItem(line,1,item);
    item = new QStandardItem(QString::number(this->id_machine));
    model->setItem(line,2,item);
    item = new QStandardItem(QString::fromStdString(this->email));
    model->setItem(line,3,item);
    item = new QStandardItem(QString::fromStdString(this->phone));
    model->setItem(line,4,item);
    item = new QStandardItem(QString::fromStdString(this->message));
    model->setItem(line,5,item);

    std::vector<std::pair<Machine_detail, Machine_state>>::const_iterator iter = this->list_broken_detail.begin();
    std::vector<std::pair<Machine_detail, Machine_state>>::const_iterator count = this->list_broken_detail.begin();

    while(iter != this->list_broken_detail.end())
    {
        count++;
        if(count == (this->list_broken_detail.end()))
        {
            detail << iter->first << ": " << iter->second;
            iter++;
        }
        else
        {
            detail << iter->first << ": " << iter->second << "; ";
            iter++;
        }
        item = new QStandardItem(QString::fromStdString(detail.str()));
        model->setItem(line,6,item);
    }
    line++;
}

QString _Request::print() const
{
    std::stringstream storage;
    storage << "id заявки: " << this->id << '\n'\
            << "id машины: " << this->id_machine << '\n'\
            << "email: " << this->email << '\n'\
            << "Номер телефона: " << this->phone << '\n'\
            << "Имя: " << this->name << '\n'\
            << "Фамилия: " << this->surname << '\n'\
            << "Отчество: " << this->patronymic << '\n'\
            << "Описание проблемы: " << this->message << '\n'\
            << "\nСписок деталей, требующих ремонта:" << std::endl;

    std::vector<std::pair<Machine_detail, Machine_state>>::const_iterator iter = this->list_broken_detail.begin();
    while(iter != this->list_broken_detail.end())
    {
        storage << '\t' << iter->first << ": " << iter->second << std::endl;
        iter++;
    }

    QString result = QString::fromStdString(storage.str());

    return result;
}

void _Request::change(QString _id, QString _email, QString _phone, QString _name, QString _surname,
                      QString _patronymic, QString _message, QString _broken_list)
{
    std::string email = _email.toStdString();
    std::string phone = _phone.toStdString();;
    std::string name = _name.toStdString();;
    std::string surname = _surname.toStdString();;
    std::string patronymic = _patronymic.toStdString();;
    std::string message = _message.toStdString();

    while(true)
    {
        if((_id == nullptr) || (_email == nullptr) || (_phone == nullptr) || (_name == nullptr) ||
                 (_surname == nullptr) || (_patronymic == nullptr))
        {
            return;
        }
        break;
    }

    std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail;
    std::pair<Machine_detail, Machine_state> info_detail;
    std::vector<std::string> global_arguments_input;
    std::vector<std::string> arguments_input;
    std::string input = _broken_list.toStdString();

    while (true)
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
                            return;
                        }
                        if (detail_state > 2)
                        {
                            return;
                        }
                        info_detail.first = Machine_detail(detail);
                        info_detail.second = Machine_state(detail_state);
                        list_broken_detail.push_back(info_detail);
                    }
                    else
                    {
                        return;
                    }
                }
                else
                {
                    return;
                }
            }
        }
        break;
    }

    this->message = message;
    this->patronymic = patronymic;
    this->surname = surname;
    this->name = name;
    this->phone = phone;
    this->email = email;
    this->list_broken_detail = list_broken_detail;
}
