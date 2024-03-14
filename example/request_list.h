#ifndef REQUEST_LIST_H
#define REQUEST_LIST_H

#include <QObject>
#include <QStandardItemModel>
#include "_request.h"
#include "machine_list.h"

/*requests.txt - Название файла, где хранится данные о запросах*/
class Request_list : public QObject, public _Request
{
    Q_OBJECT
private:
    std::vector<_Request> request_list;
public:
    void push_back(const _Request request);
    const _Request* get_by_id(const uint16_t id) const;

    Request_list();
    ~Request_list();

    void print(QStandardItemModel *model) const;
    /*
        Формат хранения данных: текстовый
    */
    void save() const;  // Сохраняет в файл requests.txt данные о запросах
    void load();		// Загружает из файла requests.txt данные о запросах
};

#endif // REQUEST_LIST_H
