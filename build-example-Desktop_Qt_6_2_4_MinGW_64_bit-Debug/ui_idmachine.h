/********************************************************************************
** Form generated from reading UI file 'idmachine.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IDMACHINE_H
#define UI_IDMACHINE_H

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

class Ui_IdMachine
{
public:
    QLabel *data;
    QLabel *statusBar;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *id;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QDialog *IdMachine)
    {
        if (IdMachine->objectName().isEmpty())
            IdMachine->setObjectName(QString::fromUtf8("IdMachine"));
        IdMachine->resize(600, 290);
        data = new QLabel(IdMachine);
        data->setObjectName(QString::fromUtf8("data"));
        data->setGeometry(QRect(10, 10, 261, 201));
        statusBar = new QLabel(IdMachine);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setGeometry(QRect(290, 220, 291, 71));
        layoutWidget = new QWidget(IdMachine);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 220, 261, 68));
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

        label_4 = new QLabel(IdMachine);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(300, 60, 261, 151));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../../Users/Papech/Downloads/png-transparent-metal-lathe-milling-machine-3d-printing-wood-computer-wood-metal.ico")));

        retranslateUi(IdMachine);

        QMetaObject::connectSlotsByName(IdMachine);
    } // setupUi

    void retranslateUi(QDialog *IdMachine)
    {
        IdMachine->setWindowTitle(QCoreApplication::translate("IdMachine", "Dialog", nullptr));
        data->setText(QString());
        statusBar->setText(QString());
        label->setText(QCoreApplication::translate("IdMachine", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 id:", nullptr));
        pushButton->setText(QCoreApplication::translate("IdMachine", "\320\235\320\260\320\271\321\202\320\270", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class IdMachine: public Ui_IdMachine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IDMACHINE_H
