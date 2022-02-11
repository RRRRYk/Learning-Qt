#-------------------------------------------------
#
# Project created by QtCreator 2022-02-11T06:06:16
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    model.cpp \
    adddialog.cpp \
    mainwidget.cpp \
    base.cpp \
    derived1.cpp \
    derived2.cpp \
    derived1widget.cpp \
    derived2widget.cpp \
    basewidget.cpp

HEADERS += \
    model.h \
    adddialog.h \
    mainwidget.h \
    base.h \
    derived1.h \
    derived2.h \
    derived1widget.h \
    derived2widget.h \
    basewidget.h
