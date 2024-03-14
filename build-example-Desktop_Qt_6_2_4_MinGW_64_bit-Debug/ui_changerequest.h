/********************************************************************************
** Form generated from reading UI file 'changerequest.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEREQUEST_H
#define UI_CHANGEREQUEST_H

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

class Ui_ChangeRequest
{
public:
    QLabel *statusBar;
    QLabel *label_10;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *_id;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *_email;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *_phone;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *_name;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *_surname;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLineEdit *_patronymic;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *_message;
    QLabel *label_11;
    QLabel *label_9;
    QLineEdit *_broken_list;

    void setupUi(QDialog *ChangeRequest)
    {
        if (ChangeRequest->objectName().isEmpty())
            ChangeRequest->setObjectName(QString::fromUtf8("ChangeRequest"));
        ChangeRequest->resize(516, 449);
        statusBar = new QLabel(ChangeRequest);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(33, 415, 521, 31));
        label_10 = new QLabel(ChangeRequest);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(33, 338, 471, 20));
        pushButton = new QPushButton(ChangeRequest);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(390, 373, 100, 41));
        layoutWidget = new QWidget(ChangeRequest);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(33, 28, 451, 291));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        _id = new QLineEdit(layoutWidget);
        _id->setObjectName(QString::fromUtf8("_id"));

        horizontalLayout->addWidget(_id);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        _email = new QLineEdit(layoutWidget);
        _email->setObjectName(QString::fromUtf8("_email"));

        horizontalLayout_2->addWidget(_email);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        _phone = new QLineEdit(layoutWidget);
        _phone->setObjectName(QString::fromUtf8("_phone"));

        horizontalLayout_3->addWidget(_phone);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        _name = new QLineEdit(layoutWidget);
        _name->setObjectName(QString::fromUtf8("_name"));

        horizontalLayout_4->addWidget(_name);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        _surname = new QLineEdit(layoutWidget);
        _surname->setObjectName(QString::fromUtf8("_surname"));

        horizontalLayout_5->addWidget(_surname);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        _patronymic = new QLineEdit(layoutWidget);
        _patronymic->setObjectName(QString::fromUtf8("_patronymic"));

        horizontalLayout_6->addWidget(_patronymic);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        _message = new QLineEdit(layoutWidget);
        _message->setObjectName(QString::fromUtf8("_message"));

        horizontalLayout_7->addWidget(_message);


        verticalLayout->addLayout(horizontalLayout_7);

        label_11 = new QLabel(ChangeRequest);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(33, 358, 471, 20));
        label_9 = new QLabel(ChangeRequest);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(33, 318, 471, 20));
        _broken_list = new QLineEdit(ChangeRequest);
        _broken_list->setObjectName(QString::fromUtf8("_broken_list"));
        _broken_list->setGeometry(QRect(33, 378, 351, 31));

        retranslateUi(ChangeRequest);

        QMetaObject::connectSlotsByName(ChangeRequest);
    } // setupUi

    void retranslateUi(QDialog *ChangeRequest)
    {
        ChangeRequest->setWindowTitle(QCoreApplication::translate("ChangeRequest", "Dialog", nullptr));
        statusBar->setText(QString());
        label_10->setText(QCoreApplication::translate("ChangeRequest", "\320\224\320\265\321\202\320\260\320\273\321\214 (\320\240\320\265\320\274\320\265\320\275\321\214 = 0, \320\224\320\262\320\270\320\263\320\260\321\202\320\265\320\273\321\214 = 1)", nullptr));
        pushButton->setText(QCoreApplication::translate("ChangeRequest", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        label->setText(QCoreApplication::translate("ChangeRequest", "id \320\267\320\260\320\277\321\200\320\276\321\201\320\260: ", nullptr));
        label_2->setText(QCoreApplication::translate("ChangeRequest", "email: ", nullptr));
        label_4->setText(QCoreApplication::translate("ChangeRequest", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260: ", nullptr));
        label_5->setText(QCoreApplication::translate("ChangeRequest", "\320\230\320\274\321\217: ", nullptr));
        label_6->setText(QCoreApplication::translate("ChangeRequest", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217: ", nullptr));
        label_7->setText(QCoreApplication::translate("ChangeRequest", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276: ", nullptr));
        label_8->setText(QCoreApplication::translate("ChangeRequest", "\320\236\320\277\320\270\321\201\320\260\320\275\320\270\320\265: ", nullptr));
        label_11->setText(QCoreApplication::translate("ChangeRequest", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 (\320\240\320\260\320\261\320\276\321\207\320\270\320\271 = 0, \320\222 \321\200\320\265\320\274\320\276\320\275\321\202\320\265 = 1, \320\241\320\273\320\276\320\274\320\260\320\275 = 2)", nullptr));
        label_9->setText(QCoreApplication::translate("ChangeRequest", "\320\222\320\262\320\276\320\264\320\270\321\202\320\265 \321\201\320\277\320\270\321\201\320\276\320\272 \321\201\320\273\320\276\320\274\320\260\320\275\320\275\321\213\321\205 \320\264\320\265\321\202\320\260\320\273\320\265\320\271 \320\262 \321\204\320\276\321\200\320\274\320\260\321\202\320\265 \320\264\320\265\321\202\320\260\320\273\321\214|\321\201\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeRequest: public Ui_ChangeRequest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEREQUEST_H
