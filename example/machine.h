#ifndef MACHINE_H
#define MACHINE_H

#include <QDialog>

namespace Ui {
class Machine;
}

class Machine : public QDialog
{
    Q_OBJECT

public:
    explicit Machine(QWidget *parent = nullptr);
    ~Machine();

signals:
    void firstWindow();  // Сигнал для первого окна на открытие

private slots:
    // Слот-обработчик нажатия кнопки
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Machine *ui;
};

#endif // MACHINE_H
