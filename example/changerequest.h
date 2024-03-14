#ifndef CHANGEREQUEST_H
#define CHANGEREQUEST_H

#include "request.h"
#include "request_list.h"
#include "machine_list.h"
#include <QDialog>

namespace Ui {
class ChangeRequest;
}

class ChangeRequest : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeRequest(QWidget *parent = nullptr);
    ~ChangeRequest();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ChangeRequest *ui;
};

#endif // CHANGEREQUEST_H
