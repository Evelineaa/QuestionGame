#ifndef FIFTFORM_H
#define FIFTFORM_H

#include <QWidget>

namespace Ui {
class FiftForm;
}

class FiftForm : public QWidget
{
    Q_OBJECT

public:
    explicit FiftForm(QWidget *parent = nullptr);
    ~FiftForm();

private slots:

    void on_btnSend_clicked();

    void on_btnContinue_clicked();

private:
    Ui::FiftForm *ui;
};

#endif // FIFTFORM_H
