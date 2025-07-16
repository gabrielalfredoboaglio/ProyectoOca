#include "casillajardin.h"
#include "../../Entities/jugador.h"

#include <iostream>

CasillaJardin::CasillaJardin() : CasillaEspecial() {
    this->tipoEspecial = "jardin";
    this->mensaje = "Te relajas en el jardín. ¡Qué hermoso lugar!";
}

CasillaJardin::CasillaJardin(int pos) : CasillaEspecial(pos, "jardin", "Te relajas en el jardín. ¡Qué hermoso lugar!") {
}

void CasillaJardin::Efecto(Jugador* jugador, Jugador* juego) {
    (void)jugador;    (void)juego;      // ← Suprimir warning de jugador no usado
    std::cout << this->mensaje << std::endl;
    std::cout << "El jardín te da energía para continuar." << std::endl;
    // Efecto neutral o positivo
}
