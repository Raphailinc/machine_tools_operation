#ifndef IDREQUEST_H
#define IDREQUEST_H

#include "request.h"
#include "request_list.h"
#include <QTableView>
#include <QStandardItemModel>
#include <QDialog>

namespace Ui {
class IdRequest;
}

class IdRequest : public QDialog
{
    Q_OBJECT

public:
    explicit IdRequest(QWidget *parent = nullptr);
    ~IdRequest();

private slots:
    void on_pushButton_clicked();

private:
    Ui::IdRequest *ui;

    // QStandardItemModel предоставляет классический
    // поэлементный подход к работе с моделью.
    QStandardItemModel *model = new QStandardItemModel();
};

#endif // IDREQUEST_H
