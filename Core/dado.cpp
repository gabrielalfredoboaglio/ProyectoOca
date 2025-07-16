#include "dado.h"
#include <random>

Dado::Dado() {
    this->valor = 1; // Valor inicial
}

int Dado::lanzar() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 6);
    this->valor = dis(gen);
    return this->valor;
}

// Getters y Setters
int Dado::getValor() const {
    return this->valor;
}

void Dado::setValor(int valor) {
    this->valor = valor;
}
