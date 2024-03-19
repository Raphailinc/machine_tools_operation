#include "allmachines.h"
#include "ui_allmachines.h"

AllMachines::AllMachines(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllMachines)
{   
    ui->setupUi(this);
    this->setWindowTitle("Все станки");

    Machine_list machine_list = Machine_list();

    int width = this->width();
    int height = this->height();

    ui->tableView->resize(width,height);

    ui->tableView->setShowGrid(true);

    ui->tableView->setGridStyle(Qt::SolidLine);

    QStringList labels = QString("id машины, Состояние, Работает ли сейчас, Состояние ремня, "
                                 "Состояние двигателя, Количество оборотов").simplified().split(",");
    model->setHorizontalHeaderLabels(labels);

    machine_list.Machine_list::print(model);
    ui->tableView->setModel(model);

    ui->tableView->resizeColumnsToContents();

    ui->tableView->show();
}

AllMachines::~AllMachines()
{
    delete ui;
    _Machine::change_var();
}
