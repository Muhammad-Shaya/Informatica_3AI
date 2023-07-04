#include <iostream>
using namespace std;

/*
 * Dato un vettore, contare quanti elementi del vettore sono compresi tra un valore minimo e massimo e inserirli in un secondo vettore
 * Il secondo vettore, quindi, contiene i numeri del primo vettore compresi tra un minimo e un massimo
 */

int copia_elementi(const int v1[], int v1_size, int v2[], int minimo, int massimo) {
    int conta = 0;
    for (int i = 0; i < v1_size; i++) {
        if (v1[i] >= minimo && v1[i] <= massimo) {
            v2[conta] = v1[i];
            conta++;
        }
    }
    return conta;
}

int main() {
    const int MAX = 100;
    int v1[MAX];
    int v1_size;
    cout << "Inserisci la dimensione del primo vettore: ";
    cin >> v1_size;
    cout << endl;
    int v2[v1_size];

    cout << "Inserisci " << v1_size << " numeri nel vettore: " << endl;
    for (int i = 0; i < v1_size; i++) {
        cin >> v1[i];
    }
    cout << endl;

    int minimo, massimo;
    cout << "Inserisci il valore minimo e il valore massimo: ";
    cin >> minimo >> massimo;
    cout << endl;

    int conta = copia_elementi(v1, v1_size, v2, minimo, massimo);
    cout << "Il numero di elementi compresi tra " << minimo << " e " << massimo << " è: " << conta << endl;

    cout << "I " << conta << " numeri compresi tra " << minimo << " e " << massimo << " copiati nel secondo vettore sono: ";
    for (int i = 0; i < conta; i++) {
        cout << v2[i] << " ";
    }
    cout << endl;

    return 0;
}