#-------------------------------------------------
#
# Project created by QtCreator 2015-05-29T11:24:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TenkoviTenkici
TEMPLATE = app


SOURCES += main.cpp\
        glavniprozor.cpp \
    map.cpp \
    specialqgraphicspixmapitem.cpp \
    brick.cpp \
    solidbrick.cpp \
    fenix.cpp

HEADERS  += glavniprozor.h \
    map.h \
    specialqgraphicspixmapitem.h \
    brick.h \
    solidbrick.h \
    fenix.h

FORMS    += glavniprozor.ui

QMAKE_CXXFLAGS += -std=c++11
