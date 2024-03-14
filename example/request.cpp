#include "request.h"
#include "ui_request.h"
#include "allrequests.h"
#include "changerequest.h"
#include "createrequest.h"
#include "idrequest.h"

Request::Request(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Request)
{
    ui->setupUi(this);
    this->setWindowTitle("Запросы");
}

Request::~Request()
{
    delete ui;
}

void Request::on_pushButton_clicked()
{
    this->close();      // Закрываем окно
    emit firstWindow(); // И вызываем сигнал на открытие главного окна
}

void Request::on_pushButton_2_clicked()
{
    AllRequests window;
    window.setModal(true);
    window.exec();
}

void Request::on_pushButton_5_clicked()
{
    IdRequest window;
    window.setModal(true);
    window.exec();
}


void Request::on_pushButton_3_clicked()
{
    CreateRequest window;
    window.setModal(true);
    window.exec();
}


void Request::on_pushButton_4_clicked()
{
    ChangeRequest window;
    window.setModal(true);
    window.exec();
}

