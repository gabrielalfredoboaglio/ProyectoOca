#include "tablero.h"
#include <iostream>
// casilla.h ya viene incluido desde tablero.h

Tablero::Tablero() {
    this->casillas = nullptr;
    this->numCasillas = 63; // Número estándar del juego de la oca
}

Tablero::~Tablero() {
    // Destructor - liberar memoria si es necesario
    if(this->casillas != nullptr) {
        delete[] this->casillas;
    }
}

void Tablero::crearTablero() {
    std::cout << "Creando tablero con " << this->numCasillas << " casillas..." << std::endl;
}

Casilla* Tablero::obtenerCasilla(int posicion) {
    std::cout << "Obteniendo casilla en posición: " << posicion << std::endl;
    return nullptr; // Por ahora
}

// Getters y Setters
Casilla* Tablero::getCasillas() const {
    return this->casillas;
}

void Tablero::setCasillas(Casilla* casillas) {
    this->casillas = casillas;
}

int Tablero::getNumCasillas() const {
    return this->numCasillas;
}

void Tablero::setNumCasillas(int numCasillas) {
    this->numCasillas = numCasillas;
}
