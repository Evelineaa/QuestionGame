#include "fiftform.h"
#include "ui_fiftform.h"
#include "sixform.h"

FiftForm::FiftForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FiftForm)
{
    ui->setupUi(this);
}

FiftForm::~FiftForm()
{
    delete ui;
}


void FiftForm::on_btnSend_clicked()
{
  ui->label2->setText("Great! I'm glad you like that in your workplace!");
}



void FiftForm::on_btnContinue_clicked()
{
      SixForm *sf = new SixForm();
      sf->show();

      close();
}

