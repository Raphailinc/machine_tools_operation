#ifndef REQUEST_H
#define REQUEST_H

#include <QDialog>

namespace Ui {
class Request;
}

class Request : public QDialog
{
    Q_OBJECT

public:
    explicit Request(QWidget *parent = nullptr);
    ~Request();

signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Request *ui;
};

#endif // REQUEST_H
