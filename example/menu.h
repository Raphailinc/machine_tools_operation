#ifndef MENU_H
#define MENU_H

#include <QMainWindow>
#include "request.h"
#include "machine.h"

namespace Ui { class Menu; }

class Menu : public QMainWindow
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();

private slots:
    // —лоты от кнопок главного окна
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::Menu *ui;
    // второе и третье окна
    Request *sWindow;
    Machine *thirdWindow;
};
#endif // PROJECT_H
