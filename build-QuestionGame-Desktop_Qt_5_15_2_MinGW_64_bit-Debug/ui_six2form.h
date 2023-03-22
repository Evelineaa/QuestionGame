/********************************************************************************
** Form generated from reading UI file 'six2form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIX2FORM_H
#define UI_SIX2FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Six2Form
{
public:
    QPushButton *btnEnd;
    QLabel *labelName;
    QLabel *label_2;
    QPushButton *btnDone;
    QLineEdit *lineEditName;
    QPushButton *btnStart1;

    void setupUi(QWidget *Six2Form)
    {
        if (Six2Form->objectName().isEmpty())
            Six2Form->setObjectName(QString::fromUtf8("Six2Form"));
        Six2Form->resize(600, 351);
        btnEnd = new QPushButton(Six2Form);
        btnEnd->setObjectName(QString::fromUtf8("btnEnd"));
        btnEnd->setGeometry(QRect(320, 270, 91, 41));
        QFont font;
        font.setBold(true);
        btnEnd->setFont(font);
        labelName = new QLabel(Six2Form);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setGeometry(QRect(80, 200, 491, 61));
        QFont font1;
        font1.setPointSize(12);
        labelName->setFont(font1);
        label_2 = new QLabel(Six2Form);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 50, 261, 31));
        QFont font2;
        font2.setPointSize(14);
        label_2->setFont(font2);
        btnDone = new QPushButton(Six2Form);
        btnDone->setObjectName(QString::fromUtf8("btnDone"));
        btnDone->setGeometry(QRect(150, 150, 91, 31));
        lineEditName = new QLineEdit(Six2Form);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));
        lineEditName->setGeometry(QRect(150, 90, 241, 41));
        btnStart1 = new QPushButton(Six2Form);
        btnStart1->setObjectName(QString::fromUtf8("btnStart1"));
        btnStart1->setGeometry(QRect(420, 270, 91, 41));
        btnStart1->setFont(font);

        retranslateUi(Six2Form);

        QMetaObject::connectSlotsByName(Six2Form);
    } // setupUi

    void retranslateUi(QWidget *Six2Form)
    {
        Six2Form->setWindowTitle(QCoreApplication::translate("Six2Form", "Form", nullptr));
        btnEnd->setText(QCoreApplication::translate("Six2Form", "End", nullptr));
        labelName->setText(QString());
        label_2->setText(QCoreApplication::translate("Six2Form", "Can you give me your name?", nullptr));
        btnDone->setText(QCoreApplication::translate("Six2Form", "Done", nullptr));
        lineEditName->setText(QString());
        btnStart1->setText(QCoreApplication::translate("Six2Form", "Start again", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Six2Form: public Ui_Six2Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIX2FORM_H
