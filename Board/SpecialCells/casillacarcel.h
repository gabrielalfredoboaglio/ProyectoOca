#ifndef CASILLACARCEL_H
#define CASILLACARCEL_H

#include "../casillaespecial.h"

class CasillaCarcel : public CasillaEspecial {
public:
    CasillaCarcel();
    CasillaCarcel(int pos);

    // Sobrescribir el efecto específico
    void Efecto(Jugador* jugador, Jugador* juego) override;
};

#endif // CASILLACARCEL_H
