#ifndef MACHINE_LIST_H
#define MACHINE_LIST_H

#include <QWidget>
#include <QStandardItemModel>
#include "_machine.h"

/*machines.bin - �������� �����, ��� �������� ������ � �������*/
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
        ������ �������� ������: ��������
        ������ 2 ����� - ����� ���������� �����, ����� �������� ���������
        ������ ������ ������
    */
    void save() const;  // ��������� � ���� machines.bin ������ � �������
    void load();		// ��������� �� ����� machines.bin ������ � �������
};

#endif // MACHINE_LIST_H
