#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    // Инициализируем второе окно
    sWindow = new Request();
    // подключаем к слоту запуска главного окна по кнопке во втором окне
    connect(sWindow, &Request::firstWindow, this, &Menu::show);

    // Инициализируем третье окно
    thirdWindow = new Machine();
    // подключаем к слоту запуска главного окна по кнопке в третьем окне
    connect(thirdWindow, &Machine::firstWindow, this, &Menu::show);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    sWindow->show();  // Показываем второе окно
    this->close();    // Закрываем основное окно
}


void Menu::on_pushButton_2_clicked()
{
    thirdWindow->show();  // Показываем третье окно
    this->close();    // Закрываем основное окно
}

