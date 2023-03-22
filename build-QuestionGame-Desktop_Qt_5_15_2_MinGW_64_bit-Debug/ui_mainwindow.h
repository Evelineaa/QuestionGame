/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btnYes;
    QPushButton *btnNo;
    QLabel *label;
    QLabel *labelText2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btnYes = new QPushButton(centralwidget);
        btnYes->setObjectName(QString::fromUtf8("btnYes"));
        btnYes->setGeometry(QRect(150, 320, 121, 51));
        btnNo = new QPushButton(centralwidget);
        btnNo->setObjectName(QString::fromUtf8("btnNo"));
        btnNo->setGeometry(QRect(460, 320, 141, 51));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 250, 401, 41));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        labelText2 = new QLabel(centralwidget);
        labelText2->setObjectName(QString::fromUtf8("labelText2"));
        labelText2->setGeometry(QRect(280, 390, 211, 51));
        labelText2->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnYes->setText(QCoreApplication::translate("MainWindow", "Yes", nullptr));
        btnNo->setText(QCoreApplication::translate("MainWindow", "No", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Hello! Time to answer some questions", nullptr));
        labelText2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
