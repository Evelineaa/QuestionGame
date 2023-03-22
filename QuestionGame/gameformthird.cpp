#include "gameformthird.h"
#include "ui_gameformthird.h"
#include "sixform.h"

gameFormThird::gameFormThird(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gameFormThird)
{
    ui->setupUi(this);
}

gameFormThird::~gameFormThird()
{
    delete ui;
}

void gameFormThird::on_btnSend_clicked()
{
 ui->labelText->setText("I'm sorry... Maybe it will change someday?");
}


void gameFormThird::on_btnContinue_clicked()
{
    SixForm *sf = new SixForm();
    sf->show();
    close();
}

