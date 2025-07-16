#ifndef CASILLA_H
#define CASILLA_H

#include <string>

// Forward declaration
class Jugador;

class Casilla {
protected:  // Cambiado a protected para que las clases hijas puedan acceder
    int posicion;
    std::string tipo;

public:
    Casilla();
    Casilla(int posicion);
    virtual ~Casilla() = default;  // Destructor virtual para herencia

    // Método virtual para efectos
    virtual void Efecto(Jugador* jugador, Jugador* juego);

    // Getters y Setters
    int getPosicion() const;
    void setPosicion(int posicion);
    std::string getTipo() const;
    void setTipo(const std::string& tipo);
};

#endif // CASILLA_H
