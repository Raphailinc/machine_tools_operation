QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    _machine.cpp \
    _request.cpp \
    allmachines.cpp \
    allrequests.cpp \
    changemachine.cpp \
    changerequest.cpp \
    createmachine.cpp \
    createrequest.cpp \
    functions.cpp \
    idmachine.cpp \
    idrequest.cpp \
    machine.cpp \
    machine_list.cpp \
    main.cpp \
    menu.cpp \
    request.cpp \
    request_list.cpp

HEADERS += \
    _machine.h \
    _request.h \
    allmachines.h \
    allrequests.h \
    changemachine.h \
    changerequest.h \
    createmachine.h \
    createrequest.h \
    functions.h \
    idmachine.h \
    idrequest.h \
    machine.h \
    machine_detail.h \
    machine_list.h \
    machine_state.h \
    menu.h \
    request.h \
    request_list.h

FORMS += \
    allmachines.ui \
    allrequests.ui \
    changemachine.ui \
    changerequest.ui \
    createmachine.ui \
    createrequest.ui \
    idmachine.ui \
    idrequest.ui \
    machine.ui \
    menu.ui \
    request.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
