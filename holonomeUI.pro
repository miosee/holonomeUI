#-------------------------------------------------
#
# Project created by QtCreator 2015-12-11T15:36:35
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = holonomeUI
TEMPLATE = app


SOURCES += main.cpp\
        holonomeui.cpp \
    position.cpp \
    posgraphwin.cpp \
    ../lib/qcustomplot.cpp

HEADERS  += holonomeui.h \
    PCANBasic.h \
    position.h \
    posgraphwin.h \
    ../lib/qcustomplot.h

FORMS    += holonomeui.ui \
    posgraphwin.ui

DISTFILES +=

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/ -lPCANBasic
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/ -lPCANBasic
else:unix: LIBS += -L$$PWD/ -lPCANBasic

INCLUDEPATH += $$PWD/
DEPENDPATH += $$PWD/
