QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    channal.cpp \
    channeledit.cpp \
    chooseinstruments.cpp \
    createpage.cpp \
    fileoperatingwidget.cpp \
    main.cpp \
    mainwindow.cpp \
    mediaplayer.cpp \
    menu.cpp \
    music.cpp \
    piano.cpp \
    songs.cpp \
    test.cpp

HEADERS += \
    channal.h \
    channeledit.h \
    chooseinstruments.h \
    createpage.h \
    fileoperatingwidget.h \
    instruments.h \
    mainwindow.h \
    mediaplayer.h \
    menu.h \
    music.h \
    piano.h \
    pitch.h \
    songs.h \
    test.h

FORMS += \
    channeledit.ui \
    chooseinstruments.ui \
    createpage.ui \
    fileoperatingwidget.ui \
    mainwindow.ui \
    menu.ui \
    piano.ui

LIBS += \
    -lwinmm

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
