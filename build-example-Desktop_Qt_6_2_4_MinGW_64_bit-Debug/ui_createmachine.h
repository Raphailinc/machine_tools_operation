/********************************************************************************
** Form generated from reading UI file 'createmachine.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEMACHINE_H
#define UI_CREATEMACHINE_H

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

class Ui_CreateMachine
{
public:
    QLabel *war1;
    QPushButton *pushButton;
    QLabel *statusBar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLineEdit *_state;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QLineEdit *_belt_wear;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QLineEdit *_engine_wear;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QLineEdit *_speed_engine;
    QLabel *war2;
    QLabel *war3;
    QLabel *war4;

    void setupUi(QDialog *CreateMachine)
    {
        if (CreateMachine->objectName().isEmpty())
            CreateMachine->setObjectName(QString::fromUtf8("CreateMachine"));
        CreateMachine->resize(592, 220);
        war1 = new QLabel(CreateMachine);
        war1->setObjectName(QString::fromUtf8("war1"));
        war1->setGeometry(QRect(478, 30, 111, 34));
        pushButton = new QPushButton(CreateMachine);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(370, 170, 100, 41));
        statusBar = new QLabel(CreateMachine);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(40, 179, 321, 31));
        layoutWidget = new QWidget(CreateMachine);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 30, 432, 141));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_15->addWidget(label_15);

        _state = new QLineEdit(layoutWidget);
        _state->setObjectName(QString::fromUtf8("_state"));

        horizontalLayout_15->addWidget(_state);


        verticalLayout_3->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_16->addWidget(label_16);

        _belt_wear = new QLineEdit(layoutWidget);
        _belt_wear->setObjectName(QString::fromUtf8("_belt_wear"));

        horizontalLayout_16->addWidget(_belt_wear);


        verticalLayout_3->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_17->addWidget(label_17);

        _engine_wear = new QLineEdit(layoutWidget);
        _engine_wear->setObjectName(QString::fromUtf8("_engine_wear"));

        horizontalLayout_17->addWidget(_engine_wear);


        verticalLayout_3->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_18->addWidget(label_18);

        _speed_engine = new QLineEdit(layoutWidget);
        _speed_engine->setObjectName(QString::fromUtf8("_speed_engine"));

        horizontalLayout_18->addWidget(_speed_engine);


        verticalLayout_3->addLayout(horizontalLayout_18);


        verticalLayout_4->addLayout(verticalLayout_3);

        war2 = new QLabel(CreateMachine);
        war2->setObjectName(QString::fromUtf8("war2"));
        war2->setGeometry(QRect(478, 67, 111, 34));
        war3 = new QLabel(CreateMachine);
        war3->setObjectName(QString::fromUtf8("war3"));
        war3->setGeometry(QRect(478, 102, 111, 34));
        war4 = new QLabel(CreateMachine);
        war4->setObjectName(QString::fromUtf8("war4"));
        war4->setGeometry(QRect(478, 138, 111, 34));

        retranslateUi(CreateMachine);

        QMetaObject::connectSlotsByName(CreateMachine);
    } // setupUi

    void retranslateUi(QDialog *CreateMachine)
    {
        CreateMachine->setWindowTitle(QCoreApplication::translate("CreateMachine", "Dialog", nullptr));
        war1->setText(QString());
        pushButton->setText(QCoreApplication::translate("CreateMachine", "\320\241\320\276\320\267\320\264\320\260\320\275\320\270\320\265", nullptr));
        statusBar->setText(QString());
        label_15->setText(QCoreApplication::translate("CreateMachine", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 (\320\240\320\260\320\261\320\276\321\207\320\270\320\271 = 0, \320\222 \321\200\320\265\320\274\320\276\320\275\321\202\320\265 = 1, \320\241\320\273\320\276\320\274\320\260\320\275 = 2): ", nullptr));
        label_16->setText(QCoreApplication::translate("CreateMachine", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \321\200\320\265\320\274\320\275\321\217 (\320\276\321\202 0 \320\264\320\276 65535): ", nullptr));
        label_17->setText(QCoreApplication::translate("CreateMachine", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\262\320\270\320\263\320\260\321\202\320\265\320\273\321\217 (\320\276\321\202 0 \320\264\320\276 65535): ", nullptr));
        label_18->setText(QCoreApplication::translate("CreateMachine", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\320\261\320\276\321\200\320\276\321\202\320\276\320\262 (\320\276\321\202 0 \320\264\320\276 32000): ", nullptr));
        war2->setText(QString());
        war3->setText(QString());
        war4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CreateMachine: public Ui_CreateMachine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEMACHINE_H
