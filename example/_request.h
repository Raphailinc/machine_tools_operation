#ifndef _REQUEST_H
#define _REQUEST_H

#include <QStandardItemModel>
#include <QString>
#include "functions.h"

class _Request // Заявка
{
public:
    uint16_t	id;
    uint16_t	id_machine;
    std::string email;
    std::string phone;
    std::string name;
    std::string surname;
    std::string patronymic;
    std::string message;
    std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail;

    _Request();
    _Request(uint16_t id_machine,
            const std::string email,
            const std::string phone,
            const std::string name,
            const std::string surname,
            const std::string patronymic,
            const std::string message,
            std::vector<std::pair<Machine_detail, Machine_state>> list_broken_detail);
    ~_Request();

    QString print() const;
    void print(QStandardItemModel *model) const;
    void change(QString _id, QString _email, QString _phone, QString _name,
                 QString _surname, QString _patronymic, QString _message, QString _broken_list);

    static void change_var()
    {
        line = 0;
    }

private:
    static int line;
};

#endif // _REQUEST_H
