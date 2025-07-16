#ifndef CASILLAJARDIN_H
#define CASILLAJARDIN_H

#include "../casillaespecial.h"

class CasillaJardin : public CasillaEspecial {
public:
    CasillaJardin();
    CasillaJardin(int pos);

    // Sobrescribir el efecto específico
    void Efecto(Jugador* jugador, Jugador* juego) override;
};

#endif // CASILLAJARDIN_H
