#ifndef CREATEMACHINE_H
#define CREATEMACHINE_H

#include "machine.h"
#include "machine_list.h"
#include <QDialog>

namespace Ui {
class CreateMachine;
}

class CreateMachine : public QDialog
{
    Q_OBJECT

public:
    explicit CreateMachine(QWidget *parent = nullptr);
    ~CreateMachine();

private slots:
    void on_pushButton_clicked();

private:
    Ui::CreateMachine *ui;
};

#endif // CREATEMACHINE_H
