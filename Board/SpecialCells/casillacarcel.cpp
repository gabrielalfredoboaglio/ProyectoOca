#include "casillacarcel.h"
#include "../../Entities/jugador.h"

#include <iostream>

CasillaCarcel::CasillaCarcel() : CasillaEspecial() {
    this->tipoEspecial = "carcel";
    this->mensaje = "¡A la cárcel! Pierdes dos turnos.";
}

CasillaCarcel::CasillaCarcel(int pos) : CasillaEspecial(pos, "carcel", "¡A la cárcel! Pierdes dos turnos.") {
}

void CasillaCarcel::Efecto(Jugador* jugador, Jugador* juego) {
    (void)juego;
    std::cout << this->mensaje << std::endl;
    if(jugador != nullptr) {
        jugador->setPuedeJugar(false);
        std::cout << jugador->getNombre() << " va a la cárcel y pierde 2 turnos." << std::endl;
    }
}
