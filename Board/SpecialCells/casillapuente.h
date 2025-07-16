#ifndef CASILLAPUENTE_H
#define CASILLAPUENTE_H

#include "../casillaespecial.h"

class CasillaPuente : public CasillaEspecial {
public:
    CasillaPuente();
    CasillaPuente(int pos);

    // Sobrescribir el efecto específico
    void Efecto(Jugador* jugador, Jugador* juego) override;
};

#endif // CASILLAPUENTE_H
