#include "machine_list.h"
#include "allmachines.h"
#include <iostream>
#include <fstream>
#include <string>

Machine_list::Machine_list()
{
    this->load();
}

Machine_list::~Machine_list()
{
    this->save();
}

void Machine_list::print(QStandardItemModel *model) const
{
    std::vector<_Machine>::const_iterator iter = this->machine_list.begin();
    while(iter != this->machine_list.end())
    {
        (*iter).print(model);
        iter++;
    }
}

const std::string file_path = "machines.bin";

void Machine_list::save() const
{
    std::ofstream out(file_path, std::ios::binary | std::ios::out);

    if (!out.is_open()) {
        std::cerr << "Ошибка открытия файла для записи!" << std::endl;
        return;
    }

    const uint16_t list_size = this->machine_list.size();
    out.write((char*)&list_size, sizeof(list_size));

    std::vector<_Machine>::const_iterator iter = this->machine_list.begin();
    while(iter != this->machine_list.end())
    {
        out.write((char*)&(*iter), sizeof(_Machine));
        iter++;
    }
    out.close();
}

void Machine_list::load()
{
    std::ifstream in(file_path, std::ios::binary | std::ios::in);

    if (!in.is_open()) {
        std::cerr << "Ошибка открытия файла для чтения!" << std::endl;
        return;
    }

    uint16_t list_size;
    in.read((char*)&list_size, sizeof(list_size));
    machine_id_global = list_size;

    for(uint16_t i = 0; i < list_size; i++)
    {
        _Machine loaded_machine = _Machine(0, 0, 0, Machine_state::UNDEFINED);
        in.read((char*)&loaded_machine, sizeof(_Machine));
        this->machine_list.push_back(loaded_machine);
    }
    in.close();
}

void Machine_list::push_back(const _Machine machine)
{
    this->machine_list.push_back(machine);
    this->save();
}

const _Machine* Machine_list::get_by_id(const uint16_t id) const
{
    std::vector<_Machine>::const_iterator iter = this->machine_list.cbegin();
    while(iter != this->machine_list.end())
    {
        if (iter->get_id() == id)
        {
            return &(*iter);
        }
        iter++;
    }
    return nullptr;
}
