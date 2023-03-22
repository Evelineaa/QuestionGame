#ifndef GAMEFORMTHIRD_H
#define GAMEFORMTHIRD_H

#include <QWidget>

namespace Ui {
class gameFormThird;
}

class gameFormThird : public QWidget
{
    Q_OBJECT

public:
    explicit gameFormThird(QWidget *parent = nullptr);
    ~gameFormThird();

private slots:
    void on_btnSend_clicked();

    void on_btnContinue_clicked();

private:
    Ui::gameFormThird *ui;
};

#endif // GAMEFORMTHIRD_H
