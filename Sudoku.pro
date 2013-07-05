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
    tablero.cpp

HEADERS  += sudoku.h \
    casilla.h \
    tablero.h

FORMS    += sudoku.ui
