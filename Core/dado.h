#ifndef DADO_H
#define DADO_H

class Dado {
private:
    int valor;

public:
    Dado();
    int lanzar();

    // Getters y Setters
    int getValor() const;
    void setValor(int valor);
};

#endif // DADO_H
