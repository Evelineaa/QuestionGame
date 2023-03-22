#ifndef SIX4FORM_H
#define SIX4FORM_H

#include <QWidget>

namespace Ui {
class Six4Form;
}

class Six4Form : public QWidget
{
    Q_OBJECT

public:
    explicit Six4Form(QWidget *parent = nullptr);
    ~Six4Form();

private:
    Ui::Six4Form *ui;
};

#endif // SIX4FORM_H
