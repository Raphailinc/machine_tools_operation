#include "changerequest.h"
#include "ui_changerequest.h"

ChangeRequest::ChangeRequest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeRequest)
{
    ui->setupUi(this);
    this->setWindowTitle("Изменение запроса");
    ui->statusBar->setText("Это - форма для изменения запроса.");
}

ChangeRequest::~ChangeRequest()
{
    delete ui;
}

void ChangeRequest::on_pushButton_clicked()
{
    Request_list rq_list = Request_list();
    Machine_list machine_list = Machine_list();

    QString _id = ui->_id->text();
    QString _email = ui->_email->text();
    QString _phone = ui->_phone->text();
    QString _name = ui->_name->text();
    QString _surname = ui->_surname->text();
    QString _patronymic = ui->_patronymic->text();
    QString _message = ui->_message->text();
    QString _broken_list = ui->_broken_list->text();

    const_cast<_Request*>(rq_list.get_by_id(std::stoi(_id.toStdString())))->change(_id, _email, _phone, _name, _surname,
                                                                                   _patronymic, _message, _broken_list);
    rq_list.save();

    ui->statusBar->setText("Запрос успешно изменен.");
    ui->statusBar->setStyleSheet("color: green");
}

