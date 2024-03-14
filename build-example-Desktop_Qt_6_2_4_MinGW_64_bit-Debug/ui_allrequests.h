/********************************************************************************
** Form generated from reading UI file 'allrequests.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALLREQUESTS_H
#define UI_ALLREQUESTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_AllRequests
{
public:
    QTableView *tableView;

    void setupUi(QDialog *AllRequests)
    {
        if (AllRequests->objectName().isEmpty())
            AllRequests->setObjectName(QString::fromUtf8("AllRequests"));
        AllRequests->resize(1920, 1080);
        tableView = new QTableView(AllRequests);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 256, 192));

        retranslateUi(AllRequests);

        QMetaObject::connectSlotsByName(AllRequests);
    } // setupUi

    void retranslateUi(QDialog *AllRequests)
    {
        AllRequests->setWindowTitle(QCoreApplication::translate("AllRequests", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AllRequests: public Ui_AllRequests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALLREQUESTS_H
