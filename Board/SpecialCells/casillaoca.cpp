#include "casillaoca.h"
#include "../../Entities/jugador.h"

#include <iostream>

CasillaOca::CasillaOca() : CasillaEspecial() {
    this->tipoEspecial = "oca";
    this->mensaje = "¡De oca a oca y tiro porque me toca!";
}

CasillaOca::CasillaOca(int pos) : CasillaEspecial(pos, "oca", "¡De oca a oca y tiro porque me toca!") {
}

void CasillaOca::Efecto(Jugador* jugador, Jugador* juego) {
      (void)juego; (void)jugador;
    std::cout << this->mensaje << std::endl;
    std::cout << "El jugador avanza a la siguiente oca y juega de nuevo." << std::endl;
    // Aquí implementarías la lógica específica de la oca
}
