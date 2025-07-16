#include "juego.h"
#include "tablero.h"
#include "dado.h"
#include "jugador.h"
#include <iostream>

Juego::Juego() {
    this->tablero = new Tablero();
    this->dado = new Dado();
    this->jugadores = nullptr;
    this->turnoActual = 0;
    this->numJugadores = 0;
}

Juego::~Juego() {
    if(this->tablero != nullptr) {
        delete this->tablero;
    }
    if(this->dado != nullptr) {
        delete this->dado;
    }
    if(this->jugadores != nullptr) {
        delete[] this->jugadores;
    }
}

// Métodos del diagrama
void Juego::iniciarJuego() {
    std::cout << "Iniciando juego..." << std::endl;
    if(this->tablero != nullptr) {
        this->tablero->crearTablero();
    }
}

void Juego::iniciarTurno() {
    std::cout << "Iniciando turno del jugador " << this->turnoActual << std::endl;
}

void Juego::siguienteTurno() {
    this->turnoActual = (this->turnoActual + 1) % this->numJugadores;
    std::cout << "Siguiente turno: jugador " << this->turnoActual << std::endl;
}

bool Juego::ganador() {
    std::cout << "Verificando ganador..." << std::endl;
    return false; // Por ahora no hay ganador
}

// Getters y Setters
Tablero* Juego::getTablero() const {
    return this->tablero;
}

void Juego::setTablero(Tablero* tablero) {
    this->tablero = tablero;
}

Dado* Juego::getDado() const {
    return this->dado;
}

void Juego::setDado(Dado* dado) {
    this->dado = dado;
}

Jugador* Juego::getJugadores() const {
    return this->jugadores;
}

void Juego::setJugadores(Jugador* jugadores) {
    this->jugadores = jugadores;
}

int Juego::getTurnoActual() const {
    return this->turnoActual;
}

void Juego::setTurnoActual(int turnoActual) {
    this->turnoActual = turnoActual;
}

int Juego::getNumJugadores() const {
    return this->numJugadores;
}

void Juego::setNumJugadores(int numJugadores) {
    this->numJugadores = numJugadores;
}
