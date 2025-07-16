#ifndef CASILLAPOSADA_H
#define CASILLAPOSADA_H

#include "../casillaespecial.h"

class CasillaPosada : public CasillaEspecial {
public:
    CasillaPosada();
    CasillaPosada(int pos);

    // Sobrescribir el efecto específico
    void Efecto(Jugador* jugador, Jugador* juego) override;
};

#endif // CASILLAPOSADA_H
