#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gameform.h"
#include "secondgameform.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnYes_clicked()
{

 static int clickCount = 0;

 if (ui->btnYes)
 {
   if (clickCount == 0)
   {
    ui->labelText2->setText("Are you sure?");
    clickCount++;
   }
   else if(clickCount == 1 )
   {
       GameForm *gf= new GameForm();
       gf->show();

       clickCount = 0;

       close();
   }

 }

}


void MainWindow::on_btnNo_clicked()
{
  SecondGameForm *sgf= new SecondGameForm();
  sgf->show();

  close();
}

