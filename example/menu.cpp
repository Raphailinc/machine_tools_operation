#include "menu.h"
#include "ui_menu.h"

Menu::Menu(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Menu)
{
    ui->setupUi(this);
    // �������������� ������ ����
    sWindow = new Request();
    // ���������� � ����� ������� �������� ���� �� ������ �� ������ ����
    connect(sWindow, &Request::firstWindow, this, &Menu::show);

    // �������������� ������ ����
    thirdWindow = new Machine();
    // ���������� � ����� ������� �������� ���� �� ������ � ������� ����
    connect(thirdWindow, &Machine::firstWindow, this, &Menu::show);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    sWindow->show();  // ���������� ������ ����
    this->close();    // ��������� �������� ����
}


void Menu::on_pushButton_2_clicked()
{
    thirdWindow->show();  // ���������� ������ ����
    this->close();    // ��������� �������� ����
}

