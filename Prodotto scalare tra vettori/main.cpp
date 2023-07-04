#include <iostream>
using namespace std;

/*
 * Fare una funzione dove dati 2 vettori come parametri, restituisca il prodotto scalare tra i due vettori
 * Il prodotto scalare è la somma dei prodotti tra gli elementi corrispondenti dei due vettori
 * Nel main non vado a chiedere all'utente di inserire i valori dei vettori ma li do direttamente io
 */

float scalar_product(float a[], float b[], int n) {
    float risultato = 0;
    for (int i = 0; i < n; i++) {
        risultato += a[i] * b[i];
    }
    return risultato;
}

int main() {
    int dimensione = 3;
    float v1[] = {1, 2, 3};
    float v2[] = {4, 5, 6};

    //Stampa vettori
    cout << "Vettore 1: " << endl;
    for (int i = 0; i < dimensione; ++i) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "Vettore 2: " << endl;
    for (int i = 0; i < dimensione; ++i) {
        cout << v2[i] << " ";
    }
    cout << endl << endl;

    //Stampa risultato
    float prodotto_scalare = scalar_product(v1, v2, dimensione);
    cout << "Il prodotto scalare è: " << prodotto_scalare << endl;

    return 0;
}