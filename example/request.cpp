#include "request.h"
#include "ui_request.h"
#include "allrequests.h"
#include "changerequest.h"
#include "createrequest.h"
#include "idrequest.h"
#include <QGuiApplication>
#include <QScreen>

Request::Request(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Request)
{
    ui->setupUi(this);
    this->setWindowTitle("Запросы");

    QScreen *primaryScreen = QGuiApplication::primaryScreen();
    QRect screenGeometry = primaryScreen->geometry();
    int x = (screenGeometry.width() - this->width()) / 2;
    int y = (screenGeometry.height() - this->height()) / 2;
    this->move(x, y);
}

Request::~Request()
{
    delete ui;
}

void Request::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
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
