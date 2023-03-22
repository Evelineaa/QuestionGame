#include "six4form.h"
#include "ui_six4form.h"

Six4Form::Six4Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Six4Form)
{
    ui->setupUi(this);
}

Six4Form::~Six4Form()
{
    delete ui;
}
