#-------------------------------------------------
#
# Project created by QtCreator 2013-06-05T14:04:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sudoku
TEMPLATE = app


SOURCES += main.cpp\
        sudoku.cpp \
    casilla.cpp \
    tablero.cpp \
    simplecrypt.cpp \
    ventana_principal.cpp \
    acercade.cpp \
    ayuda.cpp \
    ventana_jugar.cpp \
    digito.cpp

HEADERS  += sudoku.h \
    casilla.h \
    tablero.h \
    simplecrypt.h \
    ventana_principal.h \
    acercade.h \
    ayuda.h \
    ventana_jugar.h \
    digito.h

FORMS    += sudoku.ui \
    ventana_principal.ui \
    acercade.ui \
    ayuda.ui \
    ventana_jugar.ui
