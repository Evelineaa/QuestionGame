#ifndef THIRDFORM_H
#define THIRDFORM_H

#include <QWidget>

namespace Ui {
class ThirdForm;
}

class ThirdForm : public QWidget
{
    Q_OBJECT

public:
    explicit ThirdForm(QWidget *parent = nullptr);
    ~ThirdForm();

private slots:
    void on_btnClose_clicked();

    void on_btnStart_clicked();

private:
    Ui::ThirdForm *ui;
};

#endif // THIRDFORM_H
