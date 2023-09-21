#include "postfixcalc.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    postfixcalc w;
    w.show();
    return a.exec();
}
