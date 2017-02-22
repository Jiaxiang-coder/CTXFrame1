TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    Codes/NewWork/file_handler.cpp \
    Codes/NewWork/main.cpp \
    Codes/NewWork/mime_types.cpp \
    Codes/NewWork/reply.cpp \
    Codes/NewWork/request_parser.cpp \
    Codes/NewWork/server.cpp

HEADERS += \
    Codes/Framework/frameheaders.h \
    Codes/NewWork/file_handler.hpp \
    Codes/NewWork/header.hpp \
    Codes/NewWork/mime_types.hpp \
    Codes/NewWork/reply.hpp \
    Codes/NewWork/request_parser.hpp \
    Codes/NewWork/request.hpp \
    Codes/NewWork/server.hpp

LIBS += \
    -lboost_system\
    -lpthread

