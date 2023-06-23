#include <iostream>
using namespace std;

/*
 * Il programma calcola i baci di Pucca dentro una sequenza di numeri (giorni)
 * Un bacio meraviglioso si ha quando un numero supera di 10 quello precedente
 * Un bacio triste si ha quando un numero è minore o uguale a quello precedente diminuito di 10
 * Attenzione al primo giorno in quanto mon ce un precedente
 */

bool meraviglioso(int numero, int precedente) {
    if (numero > precedente + 10)
        return true;
    else
        return false;
}

bool triste(int numero, int precedente) {
    if (numero <= precedente - 10)
        return true;
    else
        return false;
}

void conta_baci(int numeri[], int dimensione) {
    int meravigliosi = 0, tristi = 0;

    if (dimensione > 0) {
        int precedente = numeri[0]; //Inizializzo il precedente con il primo numero

        for (int i = 1; i < dimensione; i++) {
            if (meraviglioso(numeri[i], precedente))
                meravigliosi++;
            else if (triste(numeri[i], precedente))
                tristi++;

            precedente = numeri[i];
        }
    }

    cout << "Baci meravigliosi: " << meravigliosi << endl;
    cout << "Baci tristi: " << tristi << endl;
}

int main() {
    const int MAX = 100;
    int numeri[MAX];
    int dimensione;

    cout << "Inserisci il numero di elementi del vettore: ";
    cin >> dimensione;

    cout << "Inserisci i " << dimensione << " numeri: " << endl;
    for (int i = 0; i < dimensione; i++) {
        cin >> numeri[i];
    }

    conta_baci(numeri, dimensione);

    return 0;
}