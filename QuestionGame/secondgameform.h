#ifndef SECONDGAMEFORM_H
#define SECONDGAMEFORM_H

#include <QWidget>

namespace Ui {
class SecondGameForm;
}

class SecondGameForm : public QWidget
{
    Q_OBJECT

public:
    explicit SecondGameForm(QWidget *parent = nullptr);
    ~SecondGameForm();

private slots:
    void on_btnSGYes_clicked();
    void on_btnSGNo_clicked();

private:
    Ui::SecondGameForm *ui;
};

#endif // SECONDGAMEFORM_H
