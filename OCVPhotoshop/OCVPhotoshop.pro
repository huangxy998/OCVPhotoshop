#-------------------------------------------------
#
# Project created by QtCreator 2019-01-26T14:13:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 console

TARGET = OCVPhotoshop
TEMPLATE = app

INCLUDEPATH += opencv_lib/include \
               opencv_lib/include/opencv \
               opencv_lib/include/opencv2

LIBS += $$PWD/opencv_lib/x86/mingw/lib/libopencv_*

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        opsapp.cpp \
    opsnewfiledialog.cpp \
    opsnewfilepresetsavedialog.cpp

HEADERS += \
        opsapp.h \
    opsnewfiledialog.h \
    opsnewfilepresetsavedialog.h

FORMS += \
        opsapp.ui \
    opsnewfiledialog.ui \
    opsnewfilepresetsavedialog.ui
