/********************************************************************************
** Form generated from reading UI file 'six3form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIX3FORM_H
#define UI_SIX3FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Six3Form
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditName;
    QLabel *labelName3;
    QPushButton *pushButton;
    QPushButton *btnEnd;
    QPushButton *btnStart;

    void setupUi(QWidget *Six3Form)
    {
        if (Six3Form->objectName().isEmpty())
            Six3Form->setObjectName(QString::fromUtf8("Six3Form"));
        Six3Form->resize(625, 431);
        label = new QLabel(Six3Form);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 50, 461, 61));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(Six3Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 120, 371, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Bahnschrift Light"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setItalic(false);
        label_2->setFont(font1);
        lineEditName = new QLineEdit(Six3Form);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(100, 160, 221, 31));
        labelName3 = new QLabel(Six3Form);
        labelName3->setObjectName(QString::fromUtf8("labelName3"));
        labelName3->setGeometry(QRect(70, 240, 471, 51));
        QFont font2;
        font2.setPointSize(11);
        labelName3->setFont(font2);
        pushButton = new QPushButton(Six3Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(100, 200, 80, 24));
        btnEnd = new QPushButton(Six3Form);
        btnEnd->setObjectName(QString::fromUtf8("btnEnd"));
        btnEnd->setGeometry(QRect(360, 310, 91, 41));
        QFont font3;
        font3.setBold(true);
        btnEnd->setFont(font3);
        btnStart = new QPushButton(Six3Form);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(460, 310, 91, 41));
        btnStart->setFont(font3);

        retranslateUi(Six3Form);

        QMetaObject::connectSlotsByName(Six3Form);
    } // setupUi

    void retranslateUi(QWidget *Six3Form)
    {
        Six3Form->setWindowTitle(QCoreApplication::translate("Six3Form", "Form", nullptr));
        label->setText(QCoreApplication::translate("Six3Form", "What if you go to google and look for a new apartments?  ", nullptr));
        label_2->setText(QCoreApplication::translate("Six3Form", "Also, can you give me your name?", nullptr));
        labelName3->setText(QString());
        pushButton->setText(QCoreApplication::translate("Six3Form", "Done", nullptr));
        btnEnd->setText(QCoreApplication::translate("Six3Form", "End", nullptr));
        btnStart->setText(QCoreApplication::translate("Six3Form", "Start again", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Six3Form: public Ui_Six3Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIX3FORM_H
