#ifndef FICHA_H
#define FICHA_H

class Ficha {
private:
    int posicion;
    bool puedeJugar;
    int color; // Para identificar la ficha

public:
    Ficha();
    Ficha(int color);

    // Getters y Setters
    int getPosicion() const;
    void setPosicion(int posicion);
    bool getPuedeJugar() const;
    void setPuedeJugar(bool puedeJugar);
    int getColor() const;
    void setColor(int color);
};

#endif // FICHA_H
