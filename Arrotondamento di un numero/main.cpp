#include <iostream>
using namespace std;

/*
 * Fare una funzione che aggiorni il valore di un numero non intero dato come argomento al valore dell'intero più vicino
 */

void arrotonda(double &numero) {
    int intero = int(numero);
    double parte_decimale = numero - intero;

    if (parte_decimale >= 0.5)
        numero = intero + 1;
    else
        numero = intero;
}

int main() {
    double numero;
    cout << "Inserisci un numero non intero: ";
    cin >> numero;
    arrotonda(numero);
    cout << "Il valore arrotondato è: " << numero << endl;

    return 0;
}
