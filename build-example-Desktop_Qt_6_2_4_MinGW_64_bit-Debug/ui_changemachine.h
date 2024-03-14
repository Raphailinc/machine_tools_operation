/********************************************************************************
** Form generated from reading UI file 'changemachine.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEMACHINE_H
#define UI_CHANGEMACHINE_H

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

class Ui_ChangeMachine
{
public:
    QPushButton *pushButton;
    QLabel *statusBar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *_id;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_19;
    QLineEdit *_state;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_20;
    QLineEdit *_belt_wear;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_21;
    QLineEdit *_engine_wear;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_22;
    QLineEdit *_speed_engine;

    void setupUi(QDialog *ChangeMachine)
    {
        if (ChangeMachine->objectName().isEmpty())
            ChangeMachine->setObjectName(QString::fromUtf8("ChangeMachine"));
        ChangeMachine->resize(496, 250);
        pushButton = new QPushButton(ChangeMachine);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(364, 205, 100, 41));
        statusBar = new QLabel(ChangeMachine);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(35, 214, 321, 31));
        layoutWidget = new QWidget(ChangeMachine);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 430, 180));
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
        label_19 = new QLabel(layoutWidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_2->addWidget(label_19);

        _state = new QLineEdit(layoutWidget);
        _state->setObjectName(QString::fromUtf8("_state"));

        horizontalLayout_2->addWidget(_state);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_20 = new QLabel(layoutWidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_3->addWidget(label_20);

        _belt_wear = new QLineEdit(layoutWidget);
        _belt_wear->setObjectName(QString::fromUtf8("_belt_wear"));

        horizontalLayout_3->addWidget(_belt_wear);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_21 = new QLabel(layoutWidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_4->addWidget(label_21);

        _engine_wear = new QLineEdit(layoutWidget);
        _engine_wear->setObjectName(QString::fromUtf8("_engine_wear"));

        horizontalLayout_4->addWidget(_engine_wear);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_22 = new QLabel(layoutWidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_5->addWidget(label_22);

        _speed_engine = new QLineEdit(layoutWidget);
        _speed_engine->setObjectName(QString::fromUtf8("_speed_engine"));

        horizontalLayout_5->addWidget(_speed_engine);


        verticalLayout->addLayout(horizontalLayout_5);


        retranslateUi(ChangeMachine);

        QMetaObject::connectSlotsByName(ChangeMachine);
    } // setupUi

    void retranslateUi(QDialog *ChangeMachine)
    {
        ChangeMachine->setWindowTitle(QCoreApplication::translate("ChangeMachine", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("ChangeMachine", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        statusBar->setText(QString());
        label->setText(QCoreApplication::translate("ChangeMachine", "id \321\201\321\202\320\260\320\275\320\272\320\260: ", nullptr));
        label_19->setText(QCoreApplication::translate("ChangeMachine", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 (\320\240\320\260\320\261\320\276\321\207\320\270\320\271 = 0, \320\222 \321\200\320\265\320\274\320\276\320\275\321\202\320\265 = 1, \320\241\320\273\320\276\320\274\320\260\320\275 = 2): ", nullptr));
        label_20->setText(QCoreApplication::translate("ChangeMachine", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \321\200\320\265\320\274\320\275\321\217 (\320\276\321\202 0 \320\264\320\276 65535): ", nullptr));
        label_21->setText(QCoreApplication::translate("ChangeMachine", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\264\320\262\320\270\320\263\320\260\321\202\320\265\320\273\321\217 (\320\276\321\202 0 \320\264\320\276 65535): ", nullptr));
        label_22->setText(QCoreApplication::translate("ChangeMachine", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\276\320\261\320\276\321\200\320\276\321\202\320\276\320\262 (\320\276\321\202 0 \320\264\320\276 32000): ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeMachine: public Ui_ChangeMachine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEMACHINE_H
