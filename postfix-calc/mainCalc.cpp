#include "mainCalc.hpp"

#if defined( _MSC_VER )
#pragma execution_character_set( "utf-8" ) //유니코드 사용 전처리기 지시문
#endif

QDlgCalc::QDlgCalc(QWidget* parent)
    : QDialog(parent)
{
    // 다이얼로그의 사용자 인터페이스를 초기화
    //Qt Designer에서 디자인한 UI 요소들을 현재 다이얼로그에 로드하는 역할

    ui.setupUi(this);
    doInitUI();
}

QDlgCalc::~QDlgCalc()
{
}

bool QDlgCalc::doInitUI()
{
    ui.txtPostfix->setPlaceholderText("Postfix:");
    ui.txtInput->setPlaceholderText("0");
    ui.txtResult->setPlaceholderText("0");

    //Shadow Effect

    QGraphicsDropShadowEffect* bgShadow = new QGraphicsDropShadowEffect();
    bgShadow->setBlurRadius(30);
    bgShadow->setOffset(0.f, 2.f);
    bgShadow->setColor("#363636");
    ui.base_BG->setGraphicsEffect(bgShadow);

    QGraphicsDropShadowEffect* shadow = new QGraphicsDropShadowEffect();
    shadow->setBlurRadius(30);
    shadow->setOffset(0.f, 2.f);
    shadow->setColor("#c4cbbc");
    ui.display_BG->setGraphicsEffect(shadow);

    ui.btnAllClear->setGraphicsEffect(createButtonShadow());
    ui.btnClear->setGraphicsEffect(createButtonShadow());
    ui.btnDivide->setGraphicsEffect(createButtonShadow());
    ui.btnMultiply->setGraphicsEffect(createButtonShadow());
    ui.btnLeftParen->setGraphicsEffect(createButtonShadow());
    ui.btnMinus->setGraphicsEffect(createButtonShadow());
    ui.btnSeven->setGraphicsEffect(createButtonShadow());
    ui.btnNine->setGraphicsEffect(createButtonShadow());
    ui.btnRightParen->setGraphicsEffect(createButtonShadow());
    ui.btnEight->setGraphicsEffect(createButtonShadow());
    ui.btnAdd->setGraphicsEffect(createButtonShadow());
    ui.btnFour->setGraphicsEffect(createButtonShadow());
    ui.btnEqual->setGraphicsEffect(createButtonShadow());
    ui.btnFive->setGraphicsEffect(createButtonShadow());
    ui.btnSix->setGraphicsEffect(createButtonShadow());
    ui.btnThree->setGraphicsEffect(createButtonShadow());
    ui.btnOne->setGraphicsEffect(createButtonShadow());
    ui.btnTwo->setGraphicsEffect(createButtonShadow());
    ui.btnZero->setGraphicsEffect(createButtonShadow());

    return true;
}

QGraphicsDropShadowEffect* QDlgCalc::createButtonShadow()
{
    QGraphicsDropShadowEffect* btnShadow = new QGraphicsDropShadowEffect();
    btnShadow->setBlurRadius(4);
    btnShadow->setOffset(0.f, 2.f);
    btnShadow->setColor("#dbdbdb");

    return btnShadow;
}

void QDlgCalc::on_btnAllClear_clicked(bool checked)
{
    ui.txtInput->clear();
}

void QDlgCalc::on_btnClear_clicked(bool checked)
{
    ui.txtInput->clear();
    //스택으로 pop
}

void QDlgCalc::on_btnAdd_clicked(bool checked)
{
    ui.txtInput->setText("×");
}

void QDlgCalc::on_btnMinus_clicked(bool checked)
{
    ui.txtInput->setText("-");
}

void QDlgCalc::on_btnMultiply_clicked(bool checked)
{
    ui.txtInput->setText("×");
}

void QDlgCalc::on_btnDivide_clicked(bool checked)
{
    ui.txtInput->setText("÷");
}

void QDlgCalc::on_btnLeftParen_clicked(bool checked)
{
    ui.txtInput->setText("(");
}

void QDlgCalc::on_btnRightParen_clicked(bool checked)
{
    ui.txtInput->setText(")");
}

void QDlgCalc::on_btnEqual_clicked(bool checked)
{
    ui.txtInput->setText("=");
}

void QDlgCalc::on_btnZero_clicked(bool checked)
{
    ui.txtInput->setText("0");
}

void QDlgCalc::on_btnOne_clicked(bool checked)
{
    ui.txtInput->setText("1");
}

void QDlgCalc::on_btnTwo_clicked(bool checked)
{
    ui.txtInput->setText("2");
}

void QDlgCalc::on_btnThree_clicked(bool checked)
{
    ui.txtInput->setText("3");
}

void QDlgCalc::on_btnFour_clicked(bool checked)
{
    ui.txtInput->setText("4");
}

void QDlgCalc::on_btnFive_clicked(bool checked)
{
    ui.txtInput->setText("5");
}

void QDlgCalc::on_btnSix_clicked(bool checked)
{
    ui.txtInput->setText("6");
}

void QDlgCalc::on_btnSeven_clicked(bool checked)
{
    ui.txtInput->setText("7");
}

void QDlgCalc::on_btnEight_clicked(bool checked)
{
    ui.txtInput->setText("8");
}

void QDlgCalc::on_btnNine_clicked(bool checked)
{
    ui.txtInput->setText("9");
}
