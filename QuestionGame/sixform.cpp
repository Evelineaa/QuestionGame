#include "sixform.h"
#include "six3form.h"
#include "ui_sixform.h"
#include "six2form.h"

SixForm::SixForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SixForm)
{
    ui->setupUi(this);
}

SixForm::~SixForm()
{
    delete ui;
}

void SixForm::on_btnFirst_2_clicked()
{
    Six2Form *s2f = new Six2Form();
    s2f->show();
    close();
}



void SixForm::on_btnSecond2_clicked()
{
    Six3Form *s3f = new Six3Form();
    s3f->show();

    close();
}

