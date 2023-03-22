#ifndef SIX3FORM_H
#define SIX3FORM_H

#include <QWidget>

namespace Ui {
class Six3Form;
}

class Six3Form : public QWidget
{
    Q_OBJECT

public:
    explicit Six3Form(QWidget *parent = nullptr);
    ~Six3Form();

private slots:
    void on_pushButton_clicked();

    void on_btnEnd_clicked();

    void on_btnStart_clicked();

private:
    Ui::Six3Form *ui;
};

#endif // SIX3FORM_H
