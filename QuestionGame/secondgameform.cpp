#include "secondgameform.h"
#include "ui_secondgameform.h"
#include "gameform.h"
#include "thirdform.h"

SecondGameForm::SecondGameForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SecondGameForm)
{
    ui->setupUi(this);
}

SecondGameForm::~SecondGameForm()
{
    delete ui;
}

void SecondGameForm::on_btnSGYes_clicked()    // Why... Don't you like questions?
{
    GameForm *gf= new GameForm();
    gf->show();
     close();
}


void SecondGameForm::on_btnSGNo_clicked()
{
  ThirdForm *tf= new ThirdForm();
  tf->show();
   close();
}

