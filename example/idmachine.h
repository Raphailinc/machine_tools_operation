#ifndef IDMACHINE_H
#define IDMACHINE_H

#include "machine.h"
#include "machine_list.h"
#include <QTableView>
#include <QStandardItemModel>
#include <QDialog>

namespace Ui {
class IdMachine;
}

class IdMachine : public QDialog
{
    Q_OBJECT

public:
    explicit IdMachine(QWidget *parent = nullptr);
    ~IdMachine();

private slots:
    void on_pushButton_clicked();

private:
    Ui::IdMachine *ui;

    QStandardItemModel *model = new QStandardItemModel();
};

#endif // IDMACHINE_H
