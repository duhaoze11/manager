#-------------------------------------------------
#
# Project created by QtCreator 2014-05-10T09:23:16
#
#-------------------------------------------------

QT       += core gui
QT       += sql xml

TARGET = manager
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    pieview.cpp \
    logindialog.cpp

HEADERS  += widget.h \
    connection.h \
    pieview.h \
    logindialog.h

FORMS    += widget.ui \
    logindialog.ui

OTHER_FILES += \
    my.rc
RC_FILE = \
  my.rc
