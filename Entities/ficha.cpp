#include "ficha.h"

Ficha::Ficha() {
    this->posicion = 0;
    this->puedeJugar = true;
    this->color = 1; // Color por defecto
}

Ficha::Ficha(int color) {
    this->posicion = 0;
    this->puedeJugar = true;
    this->color = color;
}

// Getters y Setters
int Ficha::getPosicion() const {
    return this->posicion;
}

void Ficha::setPosicion(int posicion) {
    this->posicion = posicion;
}

bool Ficha::getPuedeJugar() const {
    return this->puedeJugar;
}

void Ficha::setPuedeJugar(bool puedeJugar) {
    this->puedeJugar = puedeJugar;
}

int Ficha::getColor() const {
    return this->color;
}

void Ficha::setColor(int color) {
    this->color = color;
}
