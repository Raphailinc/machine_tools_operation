#include "request_list.h"
#include "allrequests.h"
#include <iostream>
#include <fstream>
#include <string>

Request_list::Request_list()
{
    this->load();
}

Request_list::~Request_list()
{
    this->save();
}

void Request_list::push_back(const _Request request)
{
    this->request_list.push_back(request);
    this->save();
}

void Request_list::print(QStandardItemModel *model) const
{
    std::vector<_Request>::const_iterator iter = this->request_list.begin();
    while(iter != this->request_list.end())
    {
        (*iter).print(model);
        iter++;
    }
}

const std::string file_path = "requests.txt";

void Request_list::save() const
{
    std::ofstream out(file_path);

    if (!out.is_open()) {
        std::cerr << "Ошибка открытия файла для записи!" << std::endl;
        return;
    }
    out << "count=" << this->request_list.size() << "\n\n";
    std::cout << "Загружено запросов из файла: " << this->request_list.size() << std::endl;

    std::vector<_Request>::const_iterator iter = this->request_list.begin();
    while(iter != this->request_list.end())
    {
        std::ostringstream stream;
        std::vector<std::pair<Machine_detail, Machine_state>>::const_iterator iter_broken = iter->list_broken_detail.begin();
        while(iter_broken != iter->list_broken_detail.end())
        {
            stream << uint16_t(iter_broken->first) << "," << uint16_t(iter_broken->second) << '|';
            iter_broken++;
        }
        std::string broken_list = stream.str();

        out << "id=" << iter->id << '\n'\
            << "id_machine=" << iter->id_machine << '\n'\
            << "email=" << iter->email << '\n'\
            << "phone=" << iter->phone << '\n'\
            << "name=" << iter->name << '\n'\
            << "surname=" << iter->surname << '\n'\
            << "patronymic=" << iter->patronymic << '\n'\
            << "message=" << iter->message << '\n'\
            << "broken_list=" << broken_list << '\n' << std::endl;
        iter++;
    }
    out.close();
}

void Request_list::load()
{
    std::ifstream in(file_path);

    if (!in.is_open()) {
        std::cerr << "Ошибка открытия файла для чтения!" << std::endl;
        return;
    }

    std::string count = "";
    std::getline(in, count, '=');
    std::getline(in, count, '\n');
    request_id_global = std::stoi(count);

    while(!in.eof())
    {
        _Request req = _Request();
        std::string tmp;

        std::getline(in, tmp, '=');
        if (tmp == "\n")
        {
            continue;
        }
        std::getline(in, tmp, '\n');
        req.id = std::stoi(tmp);

        std::getline(in, tmp, '=');
        std::getline(in, tmp, '\n');
        req.id_machine = std::stoi(tmp);

        std::getline(in, req.email, '=');
        std::getline(in, req.email, '\n');

        std::getline(in, req.phone, '=');
        std::getline(in, req.phone, '\n');

        std::getline(in, req.name, '=');
        std::getline(in, req.name, '\n');

        std::getline(in, req.surname, '=');
        std::getline(in, req.surname, '\n');

        std::getline(in, req.patronymic, '=');
        std::getline(in, req.patronymic, '\n');

        std::getline(in, req.message, '=');
        std::getline(in, req.message, '\n');

        std::getline(in, tmp, '=');
        std::getline(in, tmp, '\n');

        std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail;

        std::pair<Machine_detail, Machine_state> info_detail;
        char* ptr = strtok((char*)tmp.c_str(), "|");
        while (ptr != NULL)
        {
            std::string ptr_data(ptr);
            char* it = &ptr_data[0];
            while (*it != ',')
            {
                it++;
            }
            *it = '\0';
            info_detail.first = Machine_detail(std::stoi(ptr_data));

            it++;
            info_detail.second = Machine_state(std::stoi(it));

            ptr = strtok(NULL, "|");
            list_broken_detail.push_back(info_detail);
        }
        req.list_broken_detail = list_broken_detail;
        this->request_list.push_back(req);
    }
    in.close();
}

const _Request* Request_list::get_by_id(const uint16_t id) const
{
    std::vector<_Request>::const_iterator iter = this->request_list.begin();
    while(iter != this->request_list.end())
    {
        if (iter->id == id)
        {
            return &(*iter);
        }
        iter++;
    }
    return nullptr;
}
