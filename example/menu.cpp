#include "menu.h"
#include "ui_menu.h"
#include <QGuiApplication>
#include <QScreen>

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    sWindow = new Request();
    connect(sWindow, &Request::firstWindow, this, &Menu::show);

    thirdWindow = new Machine();
    connect(thirdWindow, &Machine::firstWindow, this, &Menu::show);

    QScreen *primaryScreen = QGuiApplication::primaryScreen();
    QRect screenGeometry = primaryScreen->geometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    sWindow->show();
    this->close();
}

void Menu::on_pushButton_2_clicked()
{
    thirdWindow->show();
    this->close();
}
