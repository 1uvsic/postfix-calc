//#include "postfixcalc.h"
#include "mainCalc.hpp"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QDlgCalc w;
    w.show();
    return a.exec();
}
