#include "allrequests.h"
#include "ui_allrequests.h"

AllRequests::AllRequests(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AllRequests)
{
    ui->setupUi(this);
    this->setWindowTitle("Все запросы");

    Request_list rq_list = Request_list();

    int width = this->width();
    int height = this->height();

    ui->tableView->resize(width,height);

    ui->tableView->setShowGrid(true);

    ui->tableView->setGridStyle(Qt::SolidLine);

    QStringList labels = QString("ФИО, id запроса, id машины, Email, Номер телефона, "
                                 "Описание проблемы, Список деталей").simplified().split(",");
    model->setHorizontalHeaderLabels(labels);

    rq_list.Request_list::print(model);
    ui->tableView->setModel(model);

    ui->tableView->resizeColumnsToContents();

    ui->tableView->show();
}

AllRequests::~AllRequests()
{
    delete ui;
    _Request::change_var();
}
