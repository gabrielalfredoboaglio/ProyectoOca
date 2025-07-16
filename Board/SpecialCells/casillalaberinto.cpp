#include "casillalaberinto.h"    // ← Su propio header
#include "../../Entities/jugador.h"
#include "../../Entities/ficha.h"
#include <iostream>

CasillaLaberinto::CasillaLaberinto() : CasillaEspecial() {    // ← CasillaLaberinto
    this->tipoEspecial = "laberinto";
    this->mensaje = "Te pierdes en el laberinto y retrocedes a la casilla 30.";
}

CasillaLaberinto::CasillaLaberinto(int pos) : CasillaEspecial(pos, "laberinto", "Te pierdes en el laberinto y retrocedes a la casilla 30.") {
}

void CasillaLaberinto::Efecto(Jugador* jugador, Jugador* juego) {
     (void)juego;
    std::cout << this->mensaje << std::endl;
    if(jugador != nullptr && jugador->getFicha() != nullptr) {
        jugador->getFicha()->setPosicion(30);   // ← Retrocede a casilla 30
        std::cout << jugador->getNombre() << " retrocede a la casilla 30." << std::endl;
    }
}
