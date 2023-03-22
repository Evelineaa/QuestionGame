#ifndef SIXFORM_H
#define SIXFORM_H

#include <QWidget>

namespace Ui {
class SixForm;
}

class SixForm : public QWidget
{
    Q_OBJECT

public:
    explicit SixForm(QWidget *parent = nullptr);
    ~SixForm();

    void on_btnFirst_clicked();

    void on_btnSecond_clicked();

    void on_btnThird_clicked();

    private slots:


    void on_btnFirst_2_clicked();

    void on_btnSecond2_clicked();

private:
    Ui::SixForm *ui;
};

#endif // SIXFORM_H
