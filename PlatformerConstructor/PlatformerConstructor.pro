QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    NodeManager.cpp \
    PCNode.cpp \
    Player.cpp \
    SpriteComponent.cpp \
    Stairway.cpp \
    TransformComponent.cpp \
    Wall.cpp \
    hierarchywindow.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    NodeManager.h \
    PCNode.h \
    Player.h \
    SpriteComponent.h \
    Stairway.h \
    TransformComponent.h \
    Wall.h \
    hierarchywindow.h \
    mainwindow.h

FORMS += \
    hierarchywindow.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
