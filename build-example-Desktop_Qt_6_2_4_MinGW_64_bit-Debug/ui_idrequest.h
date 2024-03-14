/********************************************************************************
** Form generated from reading UI file 'idrequest.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDREQUEST_H
#define UI_IDREQUEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IdRequest
{
public:
    QLabel *statusBar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *id;
    QPushButton *pushButton;
    QLabel *data;
    QLabel *label_4;

    void setupUi(QDialog *IdRequest)
    {
        if (IdRequest->objectName().isEmpty())
            IdRequest->setObjectName(QString::fromUtf8("IdRequest"));
        IdRequest->resize(600, 500);
        statusBar = new QLabel(IdRequest);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(290, 430, 291, 71));
        layoutWidget = new QWidget(IdRequest);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 430, 261, 68));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        id = new QLineEdit(layoutWidget);
        id->setObjectName(QString::fromUtf8("id"));

        horizontalLayout->addWidget(id);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        data = new QLabel(IdRequest);
        data->setObjectName(QString::fromUtf8("data"));
        data->setGeometry(QRect(10, 10, 371, 411));
        label_4 = new QLabel(IdRequest);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(400, 100, 351, 361));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../../Users/Papech/Downloads/png-clipart-white-magnifying-glass-material-white-white-magnifier (1).ico")));

        retranslateUi(IdRequest);

        QMetaObject::connectSlotsByName(IdRequest);
    } // setupUi

    void retranslateUi(QDialog *IdRequest)
    {
        IdRequest->setWindowTitle(QCoreApplication::translate("IdRequest", "Dialog", nullptr));
        statusBar->setText(QString());
        label->setText(QCoreApplication::translate("IdRequest", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 id:", nullptr));
        pushButton->setText(QCoreApplication::translate("IdRequest", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        data->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IdRequest: public Ui_IdRequest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDREQUEST_H
