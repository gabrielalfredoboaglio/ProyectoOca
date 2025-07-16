#ifndef CASILLALAB_H
#define CASILLALAB_H

#include "../casillaespecial.h"

class CasillaLaberinto : public CasillaEspecial {
public:
    CasillaLaberinto();
    CasillaLaberinto(int pos);

    // Sobrescribir el efecto específico
    void Efecto(Jugador* jugador, Jugador* juego) override;
};

#endif // CASILLALAB_H
