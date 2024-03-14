/********************************************************************************
** Form generated from reading UI file 'machine.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACHINE_H
#define UI_MACHINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Machine
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;

    void setupUi(QDialog *Machine)
    {
        if (Machine->objectName().isEmpty())
            Machine->setObjectName(QString::fromUtf8("Machine"));
        Machine->resize(600, 500);
        verticalLayoutWidget = new QWidget(Machine);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(200, 100, 201, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        pushButton_5 = new QPushButton(verticalLayoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(verticalLayoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);

        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Machine);

        QMetaObject::connectSlotsByName(Machine);
    } // setupUi

    void retranslateUi(QDialog *Machine)
    {
        Machine->setWindowTitle(QCoreApplication::translate("Machine", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Machine", "\320\241\321\202\320\260\320\275\320\272\320\270", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Machine", "\320\241\321\202\320\260\320\275\320\276\320\272 \320\277\320\276 id", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Machine", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214 \321\201\321\202\320\260\320\275\320\276\320\272", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Machine", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265 \321\201\321\202\320\260\320\275\320\272\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("Machine", "\320\235\320\260\320\267\320\260\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
class Machine: public Ui_Machine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACHINE_H
