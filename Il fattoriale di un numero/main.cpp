#include <iostream>
using namespace std;

/*
 * Calcolo del fattoriale di un numero.
 * Il fattoriale si ottiene moltiplicando un numero per tutti i numeri minori di esso fino al 1
 * Esempio: 5 --> 5 * 4 * 3 * 2 * 1 --> 120
 */

int calcolo_fattoriale(int n) {
    int fattoriale = 1;
    if (n == 0 || n == 1) {
        return 1;
    } else {
        for (int i = 1; i <= n; ++i) {
            fattoriale *= i;
        }
        return fattoriale;
    }
}

int main() {
    int numero;
    cout << "Inserisci un numero: ";
    cin >> numero;

    if (numero < 0) {
        cout << "Non si puo fare il fattoriale con i numeri negativi :(" << endl;
    } else {
        int fattoriale = calcolo_fattoriale(numero);
        cout << "Il fattoriale di " << numero << " è: " << fattoriale << endl;
    }

    return 0;
}

