#include "casillacalavera.h"     // ← Incluir su propio header
#include "../../Entities/jugador.h"
#include "../../Entities/ficha.h"
#include <iostream>

CasillaCalavera::CasillaCalavera() : CasillaEspecial() {
    this->tipoEspecial = "calavera";
    this->mensaje = "¡La muerte te lleva! Vuelves al inicio.";
}

CasillaCalavera::CasillaCalavera(int pos) : CasillaEspecial(pos, "calavera", "¡La muerte te lleva! Vuelves al inicio.") {
}

void CasillaCalavera::Efecto(Jugador* jugador, Jugador* juego) {
     (void)juego;
    std::cout << this->mensaje << std::endl;
    if(jugador != nullptr && jugador->getFicha() != nullptr) {
        jugador->getFicha()->setPosicion(0);    // ← Vuelve al INICIO (casilla 0)
        std::cout << jugador->getNombre() << " vuelve al inicio del juego." << std::endl;
    }
}
