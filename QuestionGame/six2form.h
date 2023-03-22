#ifndef SIX2FORM_H
#define SIX2FORM_H
#include "sixform.h"


#include <QWidget>

namespace Ui {
class Six2Form;
}

class Six2Form : public QWidget
{
    Q_OBJECT

public:
    explicit Six2Form(QWidget *parent = nullptr);
    ~Six2Form();
     Ui::Six2Form *ui;

private slots:
    void on_btnContinue_clicked();


    void on_labelText_customContextMenuRequested(const QPoint );

    void on_btnDone_clicked();

    void on_btnEnd_clicked();

    void on_btnStart_clicked();

    void on_btnStart1_clicked();

private:

};



#endif // SIX2FORM_H
