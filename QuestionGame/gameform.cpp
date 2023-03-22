#include "gameform.h"
#include "ui_gameform.h"
#include "fiftform.h"
#include "gameformthird.h"

GameForm::GameForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameForm)
{
    ui->setupUi(this);
}

GameForm::~GameForm()
{
    delete ui;
}


void GameForm::on_btnGYes_clicked()
{
 FiftForm *ff = new FiftForm();
 ff->show();
  close();
}


void GameForm::on_btnGNo_clicked()
{
 gameFormThird *gft= new gameFormThird();
 gft->show();
 close();
}

