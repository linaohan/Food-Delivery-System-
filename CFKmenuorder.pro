#-------------------------------------------------
#
# Project created by QtCreator 2013-11-21T20:53:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CFKmenuorder
TEMPLATE = app


SOURCES += main.cpp\
    datastructure.cpp \
    widget.cpp \
    consumermainpage.cpp \
    consumerbill.cpp \
    order.cpp \
    paybill.cpp \
    consumercheck.cpp \
    delivermainpage.cpp \
    taskreply.cpp \
    delivercheck.cpp

HEADERS  += \
    datastruct.h \
    consumermainpage.h \
    consumerbill.h \
    order.h \
    paybill.h \
    consumercheck.h \
    delivermainpage.h \
    taskreply.h \
    delivercheck.h \
    Widget.h

FORMS    += \
    widget.ui \
    consumermainpage.ui \
    consumerbill.ui \
    order.ui \
    paybill.ui \
    consumercheck.ui \
    delivermainpage.ui \
    taskreply.ui \
    delivercheck.ui

RESOURCES += \
    pic.qrc
