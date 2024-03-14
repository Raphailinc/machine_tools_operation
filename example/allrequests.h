#ifndef ALLREQUESTS_H
#define ALLREQUESTS_H

#include "request.h"
#include "request_list.h"
#include <QTableView>
#include <QStandardItemModel>
#include <QDialog>

namespace Ui {
class AllRequests;
}

class AllRequests : public QDialog
{
    Q_OBJECT

public:
    explicit AllRequests(QWidget *parent = nullptr);
    ~AllRequests();

private:
    Ui::AllRequests *ui;

    // QStandardItemModel предоставляет классический
    // поэлементный подход к работе с моделью.
    QStandardItemModel *model = new QStandardItemModel();
};

#endif // ALLREQUESTS_H
