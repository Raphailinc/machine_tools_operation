#include "menu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Menu w;
    w.setWindowTitle("Меню");
    w.show();

    return a.exec();
}
