#ifndef CASILLAPOZO_H
#define CASILLAPOZO_H

#include "../casillaespecial.h"

class CasillaPozo : public CasillaEspecial {
public:
    CasillaPozo();
    CasillaPozo(int pos);

    // Sobrescribir el efecto específico
    void Efecto(Jugador* jugador, Jugador* juego) override;
};

#endif // CASILLAPOZO_H
