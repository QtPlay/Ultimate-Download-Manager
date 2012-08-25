##-------------------------------------------------
#
# Project created by QtCreator 2012-07-14T16:54:13
#
#-------------------------------------------------

TARGET = wgetinterface
TEMPLATE = lib

DEFINES += WGETINTERFACE_LIBRARY

SOURCES += downloadfile.cpp \
    wgetprocess.cpp

HEADERS += downloadfile.h \
    wgetprocess.h \
    wgetprogressobject.h

!windows:QMAKE_CXXFLAGS += -std=c++0x

unix:!symbian {
    target.path = /usr/lib
    INSTALLS += target
}

unix:CONFIG(debug, debug|release):CONFIG += shared
windows:CONFIG += static
else:CONFIG += static
