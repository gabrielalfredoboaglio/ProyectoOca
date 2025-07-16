#include "casillapozo.h"
#include "../../Entities/jugador.h"

#include <iostream>

CasillaPozo::CasillaPozo() : CasillaEspecial() {
    this->tipoEspecial = "pozo";
    this->mensaje = "En el pozo te quedas hasta que otro jugador venga a salvarte.";
}

CasillaPozo::CasillaPozo(int pos) : CasillaEspecial(pos, "pozo", "En el pozo te quedas hasta que otro jugador venga a salvarte.") {
}

void CasillaPozo::Efecto(Jugador* jugador, Jugador* juego) {
     (void)juego;
    std::cout << this->mensaje << std::endl;
    if(jugador != nullptr) {
        jugador->setPuedeJugar(false);
        std::cout << jugador->getNombre() << " cae en el pozo y debe esperar." << std::endl;
    }
}
