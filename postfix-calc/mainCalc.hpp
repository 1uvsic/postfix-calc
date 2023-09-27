#pragma once

#include "ui_mainCalc.h"
#include <QDialog>
#include <QGraphicsDropShadowEffect>

class QDlgCalc : public QDialog
{
    Q_OBJECT
public:
    QDlgCalc(QWidget* parent = nullptr);
    ~QDlgCalc();

private:
    Ui::dlgMain ui;

protected:
    bool doInitUI();
    QGraphicsDropShadowEffect* createButtonShadow();

public slots:
    void on_btnAllClear_clicked(bool checked = false);
    void on_btnClear_clicked(bool checked = false);

    void on_btnAdd_clicked(bool checked = false);
    void on_btnMinus_clicked(bool checked = false);

    void on_btnMultiply_clicked(bool checked = false);
    void on_btnDivide_clicked(bool checked = false);

    void on_btnLeftParen_clicked(bool checked = false);
    void on_btnRightParen_clicked(bool checked = false);

    void on_btnEqual_clicked(bool checked = false);

    void on_btnZero_clicked(bool checked = false);
    void on_btnOne_clicked(bool checked = false);
    void on_btnTwo_clicked(bool checked = false);
    void on_btnThree_clicked(bool checked = false);
    void on_btnFour_clicked(bool checked = false);
    void on_btnFive_clicked(bool checked = false);
    void on_btnSix_clicked(bool checked = false);
    void on_btnSeven_clicked(bool checked = false);
    void on_btnEight_clicked(bool checked = false);
    void on_btnNine_clicked(bool checked = false);
};
