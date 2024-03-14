#ifndef ALLMACHINES_H
#define ALLMACHINES_H

#include "machine.h"
#include "machine_list.h"
#include <QTableView>
#include <QStandardItemModel>
#include <QDialog>

namespace Ui {
class AllMachines;
}

class AllMachines : public QDialog
{
    Q_OBJECT

public:
    explicit AllMachines(QWidget *parent = nullptr);
    ~AllMachines();

private:
    Ui::AllMachines *ui;

    // QStandardItemModel предоставляет классический
    // поэлементный подход к работе с моделью.
    QStandardItemModel *model = new QStandardItemModel();
};

#endif // ALLMACHINES_H
