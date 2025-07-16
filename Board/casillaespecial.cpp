#include "casillaespecial.h"
#include <iostream>

CasillaEspecial::CasillaEspecial() : Casilla() {
    this->tipoEspecial = "especial";
    this->mensaje = "Casilla especial";
    this->tipo = "especial";
}

CasillaEspecial::CasillaEspecial(int pos, const std::string& tipoEsp, const std::string& msg)
    : Casilla(pos) {
    this->tipoEspecial = tipoEsp;
    this->mensaje = msg;
    this->tipo = "especial";
}

void CasillaEspecial::Efecto(Jugador* jugador, Jugador* juego) {
    std::cout << "Efecto especial: " << this->mensaje << std::endl;
}

// Getters y Setters
std::string CasillaEspecial::getTipoEspecial() const {
    return this->tipoEspecial;
}

void CasillaEspecial::setTipoEspecial(const std::string& tipoEspecial) {
    this->tipoEspecial = tipoEspecial;
}

std::string CasillaEspecial::getMensaje() const {
    return this->mensaje;
}

void CasillaEspecial::setMensaje(const std::string& mensaje) {
    this->mensaje = mensaje;
}
