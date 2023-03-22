#include "thirdform.h"
#include "ui_thirdform.h"
#include "mainwindow.h"

ThirdForm::ThirdForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ThirdForm)
{
    ui->setupUi(this);
}

ThirdForm::~ThirdForm()
{
    delete ui;
}

void ThirdForm::on_btnClose_clicked()
{
   this->close();
}

void ThirdForm::on_btnStart_clicked()
{
    MainWindow *mw= new MainWindow(this);
    mw->show();
}

