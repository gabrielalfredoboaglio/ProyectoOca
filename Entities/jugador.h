#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>

// Forward declarations
class Ficha;
class Dado;

class Jugador {
private:
    std::string nombre; // Usamos string en lugar de char*
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
