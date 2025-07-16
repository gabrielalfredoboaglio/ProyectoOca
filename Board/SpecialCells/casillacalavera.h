#ifndef CASILLACAL_H
#define CASILLACAL_H

#include "../casillaespecial.h"

class CasillaCalavera : public CasillaEspecial {
public:
    CasillaCalavera();
    CasillaCalavera(int pos);

    // Sobrescribir el efecto específico
    void Efecto(Jugador* jugador, Jugador* juego) override;
};

#endif // CASILLACAL_H
