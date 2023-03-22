#ifndef GAMEFORM_H
#define GAMEFORM_H

#include <QWidget>

namespace Ui {
class GameForm;
}

class GameForm : public QWidget
{
    Q_OBJECT

public:
    explicit GameForm(QWidget *parent = nullptr);
    ~GameForm();

private slots:
    void on_btnGYes_clicked();

    void on_btnGNo_clicked();

private:
    Ui::GameForm *ui;
};

#endif // GAMEFORM_H
