#ifndef TABLERO_H
#define TABLERO_H

#include "../Board/casilla.h"  // ← Include directo (estilo facultad)

class Tablero {
private:
    Casilla* casillas;
    int numCasillas;

public:
    Tablero();
    ~Tablero();
    void crearTablero();
    Casilla* obtenerCasilla(int posicion);

    // Getters y Setters
    Casilla* getCasillas() const;
    void setCasillas(Casilla* casillas);
    int getNumCasillas() const;
    void setNumCasillas(int numCasillas);
};

#endif // TABLERO_H
