#include "casillaposada.h"
#include "../../Entities/jugador.h"

#include <iostream>

CasillaPosada::CasillaPosada() : CasillaEspecial() {
    this->tipoEspecial = "posada";
    this->mensaje = "En la posada se está bien, pero pierdes un turno.";
}

CasillaPosada::CasillaPosada(int pos) : CasillaEspecial(pos, "posada", "En la posada se está bien, pero pierdes un turno.") {
}

void CasillaPosada::Efecto(Jugador* jugador, Jugador* juego) {
     (void)juego;
    std::cout << this->mensaje << std::endl;
    if(jugador != nullptr) {
        jugador->setPuedeJugar(false);
        std::cout << jugador->getNombre() << " descansa en la posada y pierde 1 turno." << std::endl;
    }
}
