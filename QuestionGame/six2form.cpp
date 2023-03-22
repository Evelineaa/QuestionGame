#include "six2form.h"
#include "ui_six2form.h"
#include "sixform.h"
#include "ui_sixform.h"
#include "mainwindow.h"



Six2Form::Six2Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Six2Form)
{
    ui->setupUi(this);

}

Six2Form::~Six2Form()
{
    delete ui;
       ui=nullptr;


}

void Six2Form::on_btnDone_clicked()
{
 QString name= ui->lineEditName->text();
 ui->labelName->setText("I'm sorry that was the last question. Have a wonderful day " +name);
}


void Six2Form::on_btnEnd_clicked()
{
    close();
}


void Six2Form::on_btnStart1_clicked()
{
    MainWindow *mw= new MainWindow();
    mw->show();
    close();
}

