#include "casillapuente.h"
#include "../../Entities/jugador.h"

#include <iostream>

CasillaPuente::CasillaPuente() : CasillaEspecial() {
    this->tipoEspecial = "puente";
    this->mensaje = "¡De puente a puente y tiro porque me lleva la corriente!";
}

CasillaPuente::CasillaPuente(int pos) : CasillaEspecial(pos, "puente", "¡De puente a puente y tiro porque me lleva la corriente!") {
}

void CasillaPuente::Efecto(Jugador* jugador, Jugador* juego) {
    (void)juego;(void)jugador;   // ← Suprimir warning de jugador y juego no usado
    std::cout << this->mensaje << std::endl;
    std::cout << "El jugador salta al otro puente y juega de nuevo." << std::endl;
    // Aquí implementarías la lógica específica del puente
}
