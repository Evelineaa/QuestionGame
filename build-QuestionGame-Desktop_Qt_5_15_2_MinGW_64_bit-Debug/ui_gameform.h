/********************************************************************************
** Form generated from reading UI file 'gameform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEFORM_H
#define UI_GAMEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameForm
{
public:
    QPushButton *btnGYes;
    QPushButton *btnGNo;
    QLabel *labelText;

    void setupUi(QWidget *GameForm)
    {
        if (GameForm->objectName().isEmpty())
            GameForm->setObjectName(QString::fromUtf8("GameForm"));
        GameForm->resize(1018, 586);
        btnGYes = new QPushButton(GameForm);
        btnGYes->setObjectName(QString::fromUtf8("btnGYes"));
        btnGYes->setGeometry(QRect(290, 310, 161, 71));
        btnGNo = new QPushButton(GameForm);
        btnGNo->setObjectName(QString::fromUtf8("btnGNo"));
        btnGNo->setGeometry(QRect(530, 310, 151, 71));
        labelText = new QLabel(GameForm);
        labelText->setObjectName(QString::fromUtf8("labelText"));
        labelText->setGeometry(QRect(410, 220, 251, 61));
        QFont font;
        font.setPointSize(14);
        labelText->setFont(font);

        retranslateUi(GameForm);

        QMetaObject::connectSlotsByName(GameForm);
    } // setupUi

    void retranslateUi(QWidget *GameForm)
    {
        GameForm->setWindowTitle(QCoreApplication::translate("GameForm", "Form", nullptr));
        btnGYes->setText(QCoreApplication::translate("GameForm", "YES", nullptr));
        btnGNo->setText(QCoreApplication::translate("GameForm", "NO", nullptr));
        labelText->setText(QCoreApplication::translate("GameForm", "Do you like your job?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameForm: public Ui_GameForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEFORM_H
