#-------------------------------------------------
#
# Project created by QtCreator 2015-04-15T13:00:36
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Consumo_Calorico_Diario
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    frnivelatividadefisicasemanal.cpp \
    frmetaperdacalorica.cpp \
    frdadoscalculados.cpp

HEADERS  += mainwindow.h \
    frnivelatividadefisicasemanal.h \
    frmetaperdacalorica.h \
    frdadoscalculados.h

FORMS    += mainwindow.ui \
    frnivelatividadefisicasemanal.ui \
    frmetaperdacalorica.ui \
    frdadoscalculados.ui

CONFIG += mobility
MOBILITY = 

