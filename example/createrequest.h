#ifndef CREATEREQUEST_H
#define CREATEREQUEST_H

#include "request.h"
#include "request_list.h"
#include "machine_list.h"
#include <QDialog>

namespace Ui {
class CreateRequest;
}

class CreateRequest : public QDialog
{
    Q_OBJECT

public:
    explicit CreateRequest(QWidget *parent = nullptr);;
    ~CreateRequest();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CreateRequest *ui;
};

#endif // CREATEREQUEST_H
