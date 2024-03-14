#include "allrequests.h"
#include "ui_allrequests.h"

AllRequests::AllRequests(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllRequests)
{
    ui->setupUi(this);
    this->setWindowTitle("Все запросы");

    Request_list rq_list = Request_list();

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

    QStringList labels = QString("ФИО, id запроса, id машины, Email, Номер телефона, "
                                 "Описание проблемы, Список деталей").simplified().split(",");
    model->setHorizontalHeaderLabels(labels);

    // Определить элемент
    rq_list.Request_list::print(model);
    ui->tableView->setModel(model);

    // Подправим размер столбцов
    ui->tableView->resizeColumnsToContents();

    ui->tableView->show();
}

AllRequests::~AllRequests()
{
    delete ui;
    _Request::change_var();
}
