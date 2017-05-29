#-------------------------------------------------
#
# Project created by QtCreator 2017-03-10T13:53:08
#
#-------------------------------------------------

QT       += core gui sql widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BackOffice_NewWorld_Gestionnaire
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialogconnect.cpp \
    dialoggestionmagasin.cpp \
    dialoggestionpersonnel.cpp

HEADERS  += mainwindow.h \
    dialogconnect.h \
    dialoggestionmagasin.h \
    dialoggestionpersonnel.h

FORMS    += mainwindow.ui \
    dialogconnect.ui \
    dialoggestionmagasin.ui \
    dialoggestionpersonnel.ui
