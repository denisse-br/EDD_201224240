#-------------------------------------------------
#
# Project created by QtCreator 2017-12-08T01:57:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = practica1201224240
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        principal.cpp \
    avion.cpp \
    graficar.cpp \
    mantenimiento.cpp \
    esperamantenimiento.cpp \
    pasajeros.cpp \
    maletas.cpp \
    escritorio.cpp \
    colaescritorio.cpp

HEADERS += \
        principal.h \
    avion.h \
    graficar.h \
    mantenimiento.h \
    esperamantenimiento.h \
    pasajeros.h \
    maletas.h \
    escritorio.h \
    colaescritorio.h

FORMS += \
        principal.ui

RESOURCES += \
    imagen.qrc
