/********************************************************************************
** Form generated from reading UI file 'thirdform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDFORM_H
#define UI_THIRDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThirdForm
{
public:
    QLabel *label;
    QPushButton *btnClose;
    QPushButton *btnStart;

    void setupUi(QWidget *ThirdForm)
    {
        if (ThirdForm->objectName().isEmpty())
            ThirdForm->setObjectName(QString::fromUtf8("ThirdForm"));
        ThirdForm->resize(913, 527);
        label = new QLabel(ThirdForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 190, 311, 111));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        btnClose = new QPushButton(ThirdForm);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setGeometry(QRect(310, 290, 151, 51));
        btnStart = new QPushButton(ThirdForm);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(470, 290, 141, 51));

        retranslateUi(ThirdForm);

        QMetaObject::connectSlotsByName(ThirdForm);
    } // setupUi

    void retranslateUi(QWidget *ThirdForm)
    {
        ThirdForm->setWindowTitle(QCoreApplication::translate("ThirdForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("ThirdForm", "Okay.... At least have a nice day! ", nullptr));
        btnClose->setText(QCoreApplication::translate("ThirdForm", "Close", nullptr));
        btnStart->setText(QCoreApplication::translate("ThirdForm", "Start again", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirdForm: public Ui_ThirdForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDFORM_H
