#ifndef JUEGO_H
#define JUEGO_H

// Forward declarations
class Tablero;
class Dado;
class Jugador;

class Juego {
private:
    Tablero* tablero;
    Dado* dado;
    Jugador* jugadores;
    int turnoActual;
    int numJugadores;

public:
    Juego();
    ~Juego();

    // Métodos del diagrama
    void iniciarJuego();
    void iniciarTurno();
    void siguienteTurno();
    bool ganador();

    // Getters y Setters
    Tablero* getTablero() const;
    void setTablero(Tablero* tablero);
    Dado* getDado() const;
    void setDado(Dado* dado);
    Jugador* getJugadores() const;
    void setJugadores(Jugador* jugadores);
    int getTurnoActual() const;
    void setTurnoActual(int turnoActual);
    int getNumJugadores() const;
    void setNumJugadores(int numJugadores);
};

#endif // JUEGO_H
