#include "idrequest.h"
#include "ui_idrequest.h"

IdRequest::IdRequest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::IdRequest)
{
    ui->setupUi(this);
    this->setWindowTitle("Запрос по id");
}

IdRequest::~IdRequest()
{
    delete ui;
}

void IdRequest::on_pushButton_clicked()
{
    Request_list rq_list = Request_list();

    QString id = ui->id->text();

    const uint16_t rq_id = std::stoi(id.toStdString());
    const _Request* rq = rq_list.get_by_id(rq_id);

    if (rq == nullptr)
    {
        ui->statusBar->setText("Запроса по данному id не существует!");
        ui->statusBar->setStyleSheet("color: red");
    }
    else
    {
        QString result = rq->print();
        ui->data->setText(result);
        ui->statusBar->setText("Запрос по данному id найден!");
        ui->statusBar->setStyleSheet("color: green");
    }
}

