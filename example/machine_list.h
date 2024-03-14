#ifndef MACHINE_LIST_H
#define MACHINE_LIST_H

#include <QWidget>
#include <QStandardItemModel>
#include "_machine.h"

/*machines.bin - Название файла, где хранятся данные о машинах*/
class Machine_list : public QWidget
{
    Q_OBJECT
public:
    std::vector<_Machine> machine_list;
    void push_back(const _Machine machine);
    const _Machine* get_by_id(const uint16_t id) const;

    Machine_list();
    ~Machine_list();

    void print(QStandardItemModel *model) const;
    /*
        Формат хранения данных: бинарный
        Первые 2 байта - общее количество машин, далее хранится структура
        данных каждой машины
    */
    void save() const;  // Сохраняет в файл machines.bin данные о машинах
    void load();		// Загружает из файла machines.bin данные о машинах
};

#endif // MACHINE_LIST_H
