QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    fiftform.cpp \
    gameform.cpp \
    gameformthird.cpp \
    main.cpp \
    mainwindow.cpp \
    secondgameform.cpp \
    six2form.cpp \
    six3form.cpp \
    sixform.cpp \
    thirdform.cpp

HEADERS += \
    fiftform.h \
    gameform.h \
    gameformthird.h \
    mainwindow.h \
    secondgameform.h \
    six2form.h \
    six3form.h \
    sixform.h \
    thirdform.h

FORMS += \
    fiftform.ui \
    gameform.ui \
    gameformthird.ui \
    mainwindow.ui \
    secondgameform.ui \
    six2form.ui \
    six3form.ui \
    sixform.ui \
    thirdform.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
