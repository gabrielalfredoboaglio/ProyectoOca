#include "jugador.h"
#include "ficha.h"
#include "dado.h"
#include <iostream>

Jugador::Jugador() {
    this->nombre = "";
    this->ficha = new Ficha();
    this->puedeJugar = true;
}

Jugador::Jugador(const std::string& nom) {
    this->nombre = nom;
    this->ficha = new Ficha();
    this->puedeJugar = true;
}

Jugador::~Jugador() {
    if(this->ficha != nullptr) {
        delete this->ficha;
    }
}

// Métodos del diagrama
int Jugador::lanzarDado(Dado* dado) {
    if(dado != nullptr) {
        return dado->lanzar();
    }
    return 0;
}

void Jugador::moverFicha(int valor) {
    if(this->ficha != nullptr) {
        int nuevaPosicion = this->ficha->getPosicion() + valor;
        this->ficha->setPosicion(nuevaPosicion);
        std::cout << this->nombre << " se mueve " << valor << " casillas." << std::endl;
    }
}

Ficha* Jugador::getFicha() {
    return this->ficha;
}

void Jugador::setPuedeJugar(bool puede) {
    this->puedeJugar = puede;
}

bool Jugador::getPuedeJugar() {
    return this->puedeJugar;
}

// Getters y Setters adicionales
std::string Jugador::getNombre() const {
    return this->nombre;
}

void Jugador::setNombre(const std::string& nombre) {
    this->nombre = nombre;
}

void Jugador::setFicha(Ficha* ficha) {
    if(this->ficha != nullptr) {
        delete this->ficha;
    }
    this->ficha = ficha;
}
