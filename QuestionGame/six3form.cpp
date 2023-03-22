#include "six3form.h"
#include "ui_six3form.h"
#include "mainwindow.h"

Six3Form::Six3Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Six3Form)
{
    ui->setupUi(this);
}

Six3Form::~Six3Form()
{
    delete ui;
}

void Six3Form::on_pushButton_clicked()
{
  QString name= ui->lineEditName->text();
  ui->labelName3->setText("I'm Sorry, but that was the last question. Have a nice day " +name);
  close();
}


void Six3Form::on_btnEnd_clicked()
{
  close();
}


void Six3Form::on_btnStart_clicked()
{
    MainWindow *mw= new MainWindow();
    mw->show();
    close();
}

