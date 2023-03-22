/********************************************************************************
** Form generated from reading UI file 'secondgameform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDGAMEFORM_H
#define UI_SECONDGAMEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondGameForm
{
public:
    QLabel *label;
    QPushButton *btnSGYes;
    QPushButton *btnSGNo;

    void setupUi(QWidget *SecondGameForm)
    {
        if (SecondGameForm->objectName().isEmpty())
            SecondGameForm->setObjectName(QString::fromUtf8("SecondGameForm"));
        SecondGameForm->resize(627, 355);
        label = new QLabel(SecondGameForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 70, 381, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Variable Small"));
        font.setPointSize(14);
        label->setFont(font);
        btnSGYes = new QPushButton(SecondGameForm);
        btnSGYes->setObjectName(QString::fromUtf8("btnSGYes"));
        btnSGYes->setGeometry(QRect(130, 170, 161, 61));
        btnSGNo = new QPushButton(SecondGameForm);
        btnSGNo->setObjectName(QString::fromUtf8("btnSGNo"));
        btnSGNo->setGeometry(QRect(300, 170, 161, 61));

        retranslateUi(SecondGameForm);

        QMetaObject::connectSlotsByName(SecondGameForm);
    } // setupUi

    void retranslateUi(QWidget *SecondGameForm)
    {
        SecondGameForm->setWindowTitle(QCoreApplication::translate("SecondGameForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("SecondGameForm", "Why? Don't you like questions?", nullptr));
        btnSGYes->setText(QCoreApplication::translate("SecondGameForm", "YES", nullptr));
        btnSGNo->setText(QCoreApplication::translate("SecondGameForm", "NO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondGameForm: public Ui_SecondGameForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDGAMEFORM_H
