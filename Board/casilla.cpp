#include "casilla.h"
#include <iostream>

Casilla::Casilla() {
    this->posicion = 0;
    this->tipo = "normal";
}

Casilla::Casilla(int posicion) {
    this->posicion = posicion;
    this->tipo = "normal";
}

void Casilla::Efecto(Jugador* jugador, Jugador* juego) {
    std::cout << "Casilla normal - Sin efecto especial" << std::endl;
}

// Getters y Setters
int Casilla::getPosicion() const {
    return this->posicion;
}

void Casilla::setPosicion(int posicion) {
    this->posicion = posicion;
}

std::string Casilla::getTipo() const {
    return this->tipo;
}

void Casilla::setTipo(const std::string& tipo) {
    this->tipo = tipo;
}
