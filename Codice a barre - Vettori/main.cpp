#include <iostream>
using namespace std;

/*
 * Il codice a barre è fatto da 13 cifre di cui l'ultima è la cifra di controllo che si determina a partire dalle prime 12 seguendo queste regole:
 * 1) Moltiplicare per 3 tutte le cifre in posizione dispari (la prima, la terza, .. fino al undicesima)
 * 2) Moltiplicare per 1 tutte le cifre in posizione pari (la seconda, la quarta, .. fino alla dodicesima)
 * 3) Sommare i 12 valori
 * 4) Prendere il resto della divisione per 10 della somma ottenuta
 * Lo scopo del programma è quello di andare a calcolare la cifra di controllo
 */

int calcolo_cifra_controllo(int cifre[], int n) {
    int somma = 0;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            somma += cifre[i] * 3;
        else
            somma += cifre[i] * 1;
    }

    int resto = somma % 10;
    return resto;
}

int main() {
    const int n = 12;
    int cifre[n];

    cout << "Inserisci le 12 cifre del codice a barre: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> cifre[i];
    }
    cout << endl;

    int cifra_controllo = calcolo_cifra_controllo(cifre, n);
    cout << "La cifra di controllo calcolata è: " << cifra_controllo << endl;

    return 0;
}