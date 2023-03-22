/********************************************************************************
** Form generated from reading UI file 'gameformthird.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEFORMTHIRD_H
#define UI_GAMEFORMTHIRD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameFormThird
{
public:
    QPushButton *btnSend;
    QPushButton *btnContinue;
    QLabel *labelText;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *gameFormThird)
    {
        if (gameFormThird->objectName().isEmpty())
            gameFormThird->setObjectName(QString::fromUtf8("gameFormThird"));
        gameFormThird->resize(524, 385);
        btnSend = new QPushButton(gameFormThird);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setGeometry(QRect(90, 190, 81, 31));
        btnContinue = new QPushButton(gameFormThird);
        btnContinue->setObjectName(QString::fromUtf8("btnContinue"));
        btnContinue->setGeometry(QRect(360, 310, 111, 41));
        labelText = new QLabel(gameFormThird);
        labelText->setObjectName(QString::fromUtf8("labelText"));
        labelText->setGeometry(QRect(90, 230, 311, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Symbol"));
        font.setPointSize(11);
        labelText->setFont(font);
        lineEdit = new QLineEdit(gameFormThird);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 140, 251, 41));
        label_2 = new QLabel(gameFormThird);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(90, 80, 111, 31));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        label_2->setFont(font1);
        label_3 = new QLabel(gameFormThird);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 110, 111, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font2.setPointSize(10);
        font2.setBold(true);
        label_3->setFont(font2);

        retranslateUi(gameFormThird);

        QMetaObject::connectSlotsByName(gameFormThird);
    } // setupUi

    void retranslateUi(QWidget *gameFormThird)
    {
        gameFormThird->setWindowTitle(QCoreApplication::translate("gameFormThird", "Form", nullptr));
        btnSend->setText(QCoreApplication::translate("gameFormThird", "Send", nullptr));
        btnContinue->setText(QCoreApplication::translate("gameFormThird", "Continue", nullptr));
        labelText->setText(QString());
        label_2->setText(QCoreApplication::translate("gameFormThird", "Why?", nullptr));
        label_3->setText(QCoreApplication::translate("gameFormThird", "Write here:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameFormThird: public Ui_gameFormThird {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEFORMTHIRD_H
