#include <iostream>
#include <cmath>
using namespace std;

/*
 * Fare una funzione dove dati due punti calcolarne la distanza e poi dati 3 punti calcolare il perimetro di un triangolo
 * L'esercizio chiede di usare solo funzioni ma io ho implementato anche le strutture
 */

//Struttura punto --> P(x, y)
struct Punto {
    double x;
    double y;
};

//Struttura triangolo fatta da 3 punti
struct Triangolo {
    Punto punto1;
    Punto punto2;
    Punto punto3;
};

//Calcolo della distanza tra due punti
double distanza(const Punto &p1, const Punto &p2) {
    double distanza = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return distanza;
}

//Calcolo del perimetro di un triangolo
double perimetro(const Triangolo &t) {
    double lato1 = distanza(t.punto1, t.punto2);
    double lato2 = distanza(t.punto2, t.punto3);
    double lato3 = distanza(t.punto3, t.punto1);
    double perimetro = lato1 + lato2 + lato3;
    return perimetro;
}

int main() {
    //Lettura dei punti
    Punto p1 = {0, 0};
    Punto p2 = {3, 0};
    Punto p3 = {0, 4};

    //Stampa punti
    cout << "I punti inseriti sono: " << endl << endl;
    cout << "Punto 1: (" << p1.x << ", " << p1.y << ")" << endl;
    cout << "Punto 2: (" << p2.x << ", " << p2.y << ")" << endl;
    cout << "Punto 3: (" << p3.x << ", " << p3.y << ")" << endl << endl;

    //Calcolo del perimetro
    Triangolo triangolo = {p1, p2, p3};
    cout << "Il perimetro del triangolo è: " << perimetro(triangolo) << endl;

    return 0;
}
