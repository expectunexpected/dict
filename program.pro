TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    menu.c \
    getword.c

HEADERS += \
    menu.h \
    getword.h \
    global.h

DISTFILES += \
    adj.txt \
    verb.txt \
    noun.txt

