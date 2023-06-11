#include <iostream>
#include <cmath>
using namespace std;

/*
 * Dato un numero intero K e un intero N, calcolare l'n-esimo numero di Bernoulli che è dato dalla somma dei primi N numeri interi elevati alla potenza K
 * Esempio: n = 5, il risultato sarà 1 elevato alla k + 2 elevato alla k + ... + 5 elevato alla k
 */

double bernoulli(int n, int k) {
    double risultato = 0.0;
    for (int i = 1; i <= n; i++) {
        risultato += pow(i, k);    //pow serve per fare l'elevamento a potenza
    }
    return risultato;
}

int main() {
    int n, k;
    cout << "Inserisci quanti numeri vuoi leggere: ";
    cin >> n;
    cout << "Inserisci il valore di k (potenza): ";
    cin >> k;

    double risultato = bernoulli(n, k);
    cout << "L' n-esimo numero di Bernoulli con potenza " << k << " è: " << risultato << endl;

    return 0;
}
