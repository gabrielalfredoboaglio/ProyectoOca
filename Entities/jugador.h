#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
#include "ficha.h"         // ← Include directo
#include "../Core/dado.h"  // ← Include directo (NO forward declaration)

class Jugador {
private:
    std::string nombre;
    Ficha* ficha;
    bool puedeJugar;

public:
    Jugador();
    Jugador(const std::string& nom);
    ~Jugador();

    // Métodos del diagrama
    int lanzarDado(Dado* dado);
    void moverFicha(int valor);
    Ficha* getFicha();
    void setPuedeJugar(bool puede);
    bool getPuedeJugar();

    // Getters y Setters adicionales
    std::string getNombre() const;
    void setNombre(const std::string& nombre);
    void setFicha(Ficha* ficha);
};

#endif // JUGADOR_H
