#ifndef CASILLAESPECIAL_H
#define CASILLAESPECIAL_H

#include "casilla.h"

class CasillaEspecial : public Casilla {
protected:
    std::string tipoEspecial;
    std::string mensaje;

public:
    CasillaEspecial();
    CasillaEspecial(int pos, const std::string& tipoEsp, const std::string& msg);
    virtual ~CasillaEspecial() = default;

    // Método virtual para efectos específicos
    virtual void Efecto(Jugador* jugador, Jugador* juego) override;

    // Getters y Setters
    std::string getTipoEspecial() const;
    void setTipoEspecial(const std::string& tipoEspecial);
    std::string getMensaje() const;
    void setMensaje(const std::string& mensaje);
};

#endif // CASILLAESPECIAL_H
