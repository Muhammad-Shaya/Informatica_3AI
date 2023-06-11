#include <iostream>
using namespace std;

/*
 * Dato un numero k, leggere n numeri e verificare se sono multipli di k e in caso affermativo contare quanti sono.
 */

int conta_multipli(int n, int k) {
    int conta = 0, numero;
    cout << "Inserisci " << n << " numeri: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> numero;
        if (numero % k == 0)
            conta++;
    }
    return conta;
}

int main() {
    int n, k;
    cout << "Inserisci il numero k: ";
    cin >> k;
    cout << "Inserisci il numero di elementi da leggere: ";
    cin >> n;

    int risultato = conta_multipli(n, k);
    cout << endl;
    cout << "Il numero " << k << " ha " << risultato << " multipli" << endl;

    return 0;
}
