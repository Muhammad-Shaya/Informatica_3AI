#include <iostream>
#include <ctime>
using namespace std;

/*
 * Dato un vettore contenente dei numeri casuali positivi e negativi (in questo caso sono 20), stampare soltanto le sequenze di almeno 3 numeri consecutivi positivi
 * Esempio: 2 -3 7 9 4 12 -2 -5 2 9 13 -9 8 6 --> 7 9 4 12 2 9 13
 */

const int DIMENSIONE = 20;

void sequenze_positive(int numeri[]) {
    int conta = 0;

    for (int i = 0; i < DIMENSIONE; i++) {
        if (numeri[i] > 0) {
            conta++;
            if (conta == 3)
                cout << numeri[i - 2] << " " << numeri[i - 1] << " " << numeri[i] << " ";
            else if (conta > 3)
                cout << numeri[i] << " ";
        } else {
            conta = 0;
        }
    }
    cout << endl;
}

int main() {
    srand(time(NULL));
    int numeri[DIMENSIONE];

    cout << "I numeri casuali positivi e negativi nel vettore sono: " << endl;
    for (int i = 0; i < DIMENSIONE; i++) {
        numeri[i] = rand() % 201 - 100;
        cout << numeri[i] << " ";
    }
    cout << endl << endl;

    cout << "Sequenze di numeri positivi consecutivi: ";
    sequenze_positive(numeri);

    return 0;
}