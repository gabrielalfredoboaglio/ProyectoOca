#include <iostream>
#include "../Core/juego.h"
#include "../Entities/jugador.h"
#include "../Entities/ficha.h"
#include "../Board/casilla.h"
#include "../Board/casillaespecial.h"
#include "../Board/SpecialCells/casillaoca.h"
#include "../Board/SpecialCells/casillapuente.h"
#include "../Board/SpecialCells/casillaposada.h"
#include "../Board/SpecialCells/casillapozo.h"
#include "../Board/SpecialCells/casillacarcel.h"
#include "../Board/SpecialCells/casillalaberinto.h"
#include "../Board/SpecialCells/casillacalavera.h"
#include "../Board/SpecialCells/casillajardin.h"

using namespace std;

int main() {
    cout << "=== JUEGO DE LA OCA CON HERENCIA ===" << endl;
    cout << "Probando jerarquía de herencia de casillas..." << endl;

    // Crear jugadores para probar
    Jugador* jugador1 = new Jugador("Ana");
    Jugador* jugador2 = new Jugador("Luis");

    cout << "\n--- Probando polimorfismo con casillas ---" << endl;

    // Crear diferentes tipos de casillas usando polimorfismo
    Casilla* casillas[8];
    casillas[0] = new Casilla(1);           // Casilla normal
    casillas[1] = new CasillaOca(9);        // Casilla oca
    casillas[2] = new CasillaPuente(6);     // Casilla puente
    casillas[3] = new CasillaPosada(19);    // Casilla posada
    casillas[4] = new CasillaPozo(31);      // Casilla pozo
    casillas[5] = new CasillaCarcel(52);    // Casilla cárcel
    casillas[6] = new CasillaLaberinto(42); // Casilla laberinto
    casillas[7] = new CasillaCalavera(58);  // Casilla calavera

    // Probar efectos de cada casilla usando polimorfismo
    for(int i = 0; i < 8; i++) {
        cout << "\n--- Casilla " << casillas[i]->getPosicion() << " ---" << endl;
        cout << "Tipo: " << casillas[i]->getTipo() << endl;

        // Simular que un jugador cae en la casilla
        jugador1->getFicha()->setPosicion(casillas[i]->getPosicion());
        cout << jugador1->getNombre() << " cae en la casilla " << casillas[i]->getPosicion() << endl;

        // ¡POLIMORFISMO EN ACCIÓN!
        // Aunque 'casillas[i]' es de tipo Casilla*,
        // se ejecuta el método Efecto() de la clase derivada correspondiente
        casillas[i]->Efecto(jugador1, nullptr);  // Usar nullptr en lugar de juego
    }

    cout << "\n--- Probando herencia directa ---" << endl;

    // Crear instancias específicas para mostrar herencia
    CasillaOca* oca = new CasillaOca(27);
    CasillaPuente* puente = new CasillaPuente(12);
    CasillaJardin* jardin = new CasillaJardin(50);

    cout << "\nEfecto de Oca:" << endl;
    oca->Efecto(jugador2, nullptr);

    cout << "\nEfecto de Puente:" << endl;
    puente->Efecto(jugador2, nullptr);

    cout << "\nEfecto de Jardín:" << endl;
    jardin->Efecto(jugador2, nullptr);

    cout << "\n--- Información de herencia ---" << endl;
    cout << "Jerarquía demostrada:" << endl;
    cout << "Casilla (clase base)" << endl;
    cout << "  ↑" << endl;
    cout << "CasillaEspecial (clase derivada)" << endl;
    cout << "  ↑" << endl;
    cout << "CasillaOca, CasillaPuente, etc. (clases derivadas específicas)" << endl;

    cout << "\n--- Estructura organizada del proyecto ---" << endl;
    cout << "📁 Core/              ← Lógica principal" << endl;
    cout << "📁 Entities/          ← Entidades del juego" << endl;
    cout << "📁 Board/             ← Sistema de casillas" << endl;
    cout << "  📁 SpecialCells/    ← Casillas específicas" << endl;
    cout << "📁 Main/              ← Programa principal" << endl;

    // Limpiar memoria
    for(int i = 0; i < 8; i++) {
        delete casillas[i];
    }
    delete oca;
    delete puente;
    delete jardin;
    delete jugador1;
    delete jugador2;

    cout << "\nPrograma terminado exitosamente." << endl;
    return 0;
}
