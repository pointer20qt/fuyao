#-------------------------------------------------
#
# Project created by QtCreator 2020-02-06T16:38:06
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 20-signSystem
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    personalinformation.cpp \
    login.cpp \
    enrol.cpp

HEADERS  += widget.h \
    personalinformation.h \
    login.h \
    enrol.h

FORMS    += widget.ui \
    personalinformation.ui \
    login.ui \
    enrol.ui

RESOURCES +=

