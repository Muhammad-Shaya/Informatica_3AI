#include <iostream>
#include <cmath>
using namespace std;

/*
 * Dati n numeri fare la media geometrica di essi.
 * Media geometrica formula  -->  (x1 * x2 * x3 ...) elevato alla 1/n.
 */

//Calcolare la media geometrica
double media_geometrica(double numeri[], int n) {
    double prodotto = 1.0;
    for (int i = 0; i < n; i++) {
        prodotto *= numeri[i];
    }
    double media = pow(prodotto, 1.0 / n);
    return media;
}

int main() {
    const int MAX = 100;
    double numeri[MAX];
    int n;
    cout << "Inserisci quanti numeri ci sono nel vettore: ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++) {
        cout << "Inserisci il numero " << i + 1 << ": ";
        cin >> numeri[i];
    }

    double media = media_geometrica(numeri, n);
    cout << endl;
    cout << "La media geometrica è: " << media << endl;

    return 0;
}
