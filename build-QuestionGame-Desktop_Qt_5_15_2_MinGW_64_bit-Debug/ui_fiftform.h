/********************************************************************************
** Form generated from reading UI file 'fiftform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIFTFORM_H
#define UI_FIFTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FiftForm
{
public:
    QLabel *label;
    QLineEdit *lineEditWhy;
    QLabel *labelWhy;
    QPushButton *btnSend;
    QLabel *label2;
    QPushButton *btnContinue;

    void setupUi(QWidget *FiftForm)
    {
        if (FiftForm->objectName().isEmpty())
            FiftForm->setObjectName(QString::fromUtf8("FiftForm"));
        FiftForm->resize(781, 393);
        label = new QLabel(FiftForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 120, 401, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(14);
        label->setFont(font);
        lineEditWhy = new QLineEdit(FiftForm);
        lineEditWhy->setObjectName(QString::fromUtf8("lineEditWhy"));
        lineEditWhy->setGeometry(QRect(230, 190, 291, 41));
        labelWhy = new QLabel(FiftForm);
        labelWhy->setObjectName(QString::fromUtf8("labelWhy"));
        labelWhy->setGeometry(QRect(230, 240, 291, 51));
        btnSend = new QPushButton(FiftForm);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setGeometry(QRect(230, 240, 161, 41));
        label2 = new QLabel(FiftForm);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(230, 290, 571, 51));
        btnContinue = new QPushButton(FiftForm);
        btnContinue->setObjectName(QString::fromUtf8("btnContinue"));
        btnContinue->setGeometry(QRect(400, 240, 141, 41));

        retranslateUi(FiftForm);

        QMetaObject::connectSlotsByName(FiftForm);
    } // setupUi

    void retranslateUi(QWidget *FiftForm)
    {
        FiftForm->setWindowTitle(QCoreApplication::translate("FiftForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("FiftForm", "Why? Write here:", nullptr));
        labelWhy->setText(QString());
        btnSend->setText(QCoreApplication::translate("FiftForm", "Send", nullptr));
        label2->setText(QString());
        btnContinue->setText(QCoreApplication::translate("FiftForm", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FiftForm: public Ui_FiftForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIFTFORM_H
