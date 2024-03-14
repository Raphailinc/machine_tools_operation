#include "allmachines.h"
#include "ui_allmachines.h"

AllMachines::AllMachines(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllMachines)
{   
    ui->setupUi(this);
    this->setWindowTitle("Все станки");

    Machine_list machine_list = Machine_list();

    // Получить размер главного окна
    int width = this->width();
    int height = this->height();

    // Настройка размера окна tableView, чтобы он соответствовал основному окну
    ui->tableView->resize(width,height);

    //resize(width, height);

    // Настройки линии фоновой сетки
    // отображение
    ui->tableView->setShowGrid(true);

    // Сетка фона
    ui->tableView->setGridStyle(Qt::SolidLine);

    QStringList labels = QString("id машины, Состояние, Работает ли сейчас, Состояние ремня, "
                                 "Состояние двигателя, Количество оборотов").simplified().split(",");
    model->setHorizontalHeaderLabels(labels);

    // Определить элемент
    machine_list.Machine_list::print(model);
    ui->tableView->setModel(model);

    // Подправим размер столбцов
    ui->tableView->resizeColumnsToContents();

    ui->tableView->show();
}

AllMachines::~AllMachines()
{
    delete ui;
    _Machine::change_var();
}
