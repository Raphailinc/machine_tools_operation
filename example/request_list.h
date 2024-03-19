#ifndef REQUEST_LIST_H
#define REQUEST_LIST_H

#include <QObject>
#include <QStandardItemModel>
#include "_request.h"
#include "machine_list.h"

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
    void save() const;
    void load();
};

#endif // REQUEST_LIST_H
