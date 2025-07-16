#ifndef CASILLAOCA_H
#define CASILLAOCA_H

#include "../casillaespecial.h"  // ← Include directo (estilo facultad)

class CasillaOca : public CasillaEspecial {
public:
    CasillaOca();
    CasillaOca(int pos);

    // Sobrescribir el efecto específico
    void Efecto(Jugador* jugador, Jugador* juego) override;
};

#endif // CASILLAOCA_H
