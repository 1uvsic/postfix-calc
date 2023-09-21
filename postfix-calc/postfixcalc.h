#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_postfixcalc.h"

class postfixcalc : public QMainWindow
{
    Q_OBJECT

public:
    postfixcalc(QWidget *parent = nullptr);
    ~postfixcalc();

private:
    Ui::postfixcalcClass ui;
};
