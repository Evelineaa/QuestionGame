/********************************************************************************
** Form generated from reading UI file 'six4form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIX4FORM_H
#define UI_SIX4FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Six4Form
{
public:

    void setupUi(QWidget *Six4Form)
    {
        if (Six4Form->objectName().isEmpty())
            Six4Form->setObjectName(QString::fromUtf8("Six4Form"));
        Six4Form->resize(400, 300);

        retranslateUi(Six4Form);

        QMetaObject::connectSlotsByName(Six4Form);
    } // setupUi

    void retranslateUi(QWidget *Six4Form)
    {
        Six4Form->setWindowTitle(QCoreApplication::translate("Six4Form", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Six4Form: public Ui_Six4Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIX4FORM_H
