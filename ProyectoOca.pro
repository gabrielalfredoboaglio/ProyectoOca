QT -= gui
CONFIG += c++17 console
CONFIG -= app_bundle

TARGET = ProyectoOca
TEMPLATE = app

# Core - Lógica principal del juego
SOURCES += \
    Core/dado.cpp \
    Core/juego.cpp

HEADERS += \
    Core/dado.h \
    Core/juego.h

# Entities - Entidades del dominio
SOURCES += \
    Entities/jugador.cpp \
    Entities/ficha.cpp \
    Entities/tablero.cpp

HEADERS += \
    Entities/jugador.h \
    Entities/ficha.h \
    Entities/tablero.h

# Board - Sistema de casillas base
SOURCES += \
    Board/casilla.cpp \
    Board/casillaespecial.cpp

HEADERS += \
    Board/casilla.h \
    Board/casillaespecial.h

# Board/SpecialCells - Casillas específicas
SOURCES += \
    Board/SpecialCells/casillaoca.cpp \
    Board/SpecialCells/casillapuente.cpp \
    Board/SpecialCells/casillaposada.cpp \
    Board/SpecialCells/casillapozo.cpp \
    Board/SpecialCells/casillacarcel.cpp \
    Board/SpecialCells/casillalaberinto.cpp \
    Board/SpecialCells/casillacalavera.cpp \
    Board/SpecialCells/casillajardin.cpp

HEADERS += \
    Board/SpecialCells/casillaoca.h \
    Board/SpecialCells/casillapuente.h \
    Board/SpecialCells/casillaposada.h \
    Board/SpecialCells/casillapozo.h \
    Board/SpecialCells/casillacarcel.h \
    Board/SpecialCells/casillalaberinto.h \
    Board/SpecialCells/casillacalavera.h \
    Board/SpecialCells/casillajardin.h

# Main - Archivo principal
SOURCES += \
    Main/main.cpp
