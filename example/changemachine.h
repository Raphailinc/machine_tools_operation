#ifndef CHANGEMACHINE_H
#define CHANGEMACHINE_H

#include "machine.h"
#include "machine_list.h"
#include <QDialog>

namespace Ui {
class ChangeMachine;
}

class ChangeMachine : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeMachine(QWidget *parent = nullptr);
    ~ChangeMachine();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ChangeMachine *ui;
};

#endif // CHANGEMACHINE_H
