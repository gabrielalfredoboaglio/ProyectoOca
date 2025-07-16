#ifndef TABLERO_H
#define TABLERO_H

// Forward declaration
class Casilla;

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
