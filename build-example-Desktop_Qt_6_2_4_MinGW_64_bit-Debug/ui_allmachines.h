/********************************************************************************
** Form generated from reading UI file 'allmachines.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLMACHINES_H
#define UI_ALLMACHINES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_AllMachines
{
public:
    QTableView *tableView;

    void setupUi(QDialog *AllMachines)
    {
        if (AllMachines->objectName().isEmpty())
            AllMachines->setObjectName(QString::fromUtf8("AllMachines"));
        AllMachines->resize(1920, 1080);
        tableView = new QTableView(AllMachines);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 256, 192));

        retranslateUi(AllMachines);

        QMetaObject::connectSlotsByName(AllMachines);
    } // setupUi

    void retranslateUi(QDialog *AllMachines)
    {
        AllMachines->setWindowTitle(QCoreApplication::translate("AllMachines", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllMachines: public Ui_AllMachines {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLMACHINES_H
