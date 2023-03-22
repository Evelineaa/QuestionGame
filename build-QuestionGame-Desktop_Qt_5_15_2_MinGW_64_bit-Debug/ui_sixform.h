/********************************************************************************
** Form generated from reading UI file 'sixform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIXFORM_H
#define UI_SIXFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SixForm
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *btnFirst_2;
    QPushButton *btnSecond2;

    void setupUi(QWidget *SixForm)
    {
        if (SixForm->objectName().isEmpty())
            SixForm->setObjectName(QString::fromUtf8("SixForm"));
        SixForm->resize(598, 414);
        label = new QLabel(SixForm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 100, 211, 91));
        label_2 = new QLabel(SixForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 70, 281, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Variable Display Semib"));
        font.setPointSize(14);
        font.setBold(true);
        label_2->setFont(font);
        btnFirst_2 = new QPushButton(SixForm);
        btnFirst_2->setObjectName(QString::fromUtf8("btnFirst_2"));
        btnFirst_2->setGeometry(QRect(180, 160, 181, 41));
        btnSecond2 = new QPushButton(SixForm);
        btnSecond2->setObjectName(QString::fromUtf8("btnSecond2"));
        btnSecond2->setGeometry(QRect(140, 210, 271, 51));

        retranslateUi(SixForm);

        QMetaObject::connectSlotsByName(SixForm);
    } // setupUi

    void retranslateUi(QWidget *SixForm)
    {
        SixForm->setWindowTitle(QCoreApplication::translate("SixForm", "Form", nullptr));
        label->setText(QCoreApplication::translate("SixForm", "Choose the best option for you", nullptr));
        label_2->setText(QCoreApplication::translate("SixForm", "How about the place you live? ", nullptr));
        btnFirst_2->setText(QCoreApplication::translate("SixForm", "I love it!", nullptr));
        btnSecond2->setText(QCoreApplication::translate("SixForm", "I don't like it at all/It's better than nothing...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SixForm: public Ui_SixForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIXFORM_H
