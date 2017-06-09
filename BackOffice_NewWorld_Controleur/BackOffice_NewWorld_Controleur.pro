#-------------------------------------------------
#
# Project created by QtCreator 2017-06-07T14:14:31
#
#-------------------------------------------------

QT       += core gui sql widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BackOffice_NewWorld_Controleur
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialoggestionlot.cpp \
    dialogconnect.cpp \
    dialogvuepointdevente.cpp \
    dialogvuepersonnel.cpp

HEADERS  += mainwindow.h \
    dialoggestionlot.h \
    dialogconnect.h \
    dialogvuepointdevente.h \
    dialogvuepersonnel.h

FORMS    += mainwindow.ui \
    dialoggestionlot.ui \
    dialogconnect.ui \
    dialogvuepointdevente.ui \
    dialogvuepersonnel.ui
