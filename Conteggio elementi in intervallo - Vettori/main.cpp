#include <iostream>
using namespace std;

/*
 * Dato un vettore, contare quanti elementi del vettore sono compresi tra un valore minimo e massimo dati dall'utente
 * La funzione va a contare il numero di elementi compresi tra minimo e massimo dati come parametri
 */

int conta_elementi(int v[], int dimensione, int minimo, int massimo) {
    int conta = 0;
    for (int i = 0; i < dimensione; i++) {
        if (v[i] >= minimo && v[i] <= massimo)
            conta++;
    }
    return conta;
}

int main() {
    const int MAX = 100;
    int v[MAX];
    int dimensione;
    cout << "Inserisci la dimensione del vettore: ";
    cin >> dimensione;
    cout << endl;

    cout << "Inserisci " << dimensione << " numeri nel vettore: " << endl;
    for (int i = 0; i < dimensione; i++) {
        cin >> v[i];
    }
    cout << endl;

    int minimo, massimo;
    cout << "Inserisci il valore minimo e il valore massimo: ";
    cin >> minimo >> massimo;
    cout << endl;

    int conta = conta_elementi(v, dimensione, minimo, massimo);
    cout << "Il numero di elementi compresi tra " << minimo << " e " << massimo << " è: " << conta << endl;

    return 0;
}