#include <iostream>
using namespace std;

/*
 * La funzione restituisce la differenza tra il valore massimo e il valore minimo di un v di N elementi.
 */

int differenza_min_max(int v[], int n) {
    int minimo = v[0], massimo = v[0];

    for (int i = 1; i < n; i++) {
        if (v[i] < minimo)
            minimo = v[i];
        if (v[i] > massimo)
            massimo = v[i];
    }

    int differenza = massimo - minimo;
    return differenza;
}

int main() {
    const int MAX = 100;
    int v[MAX];
    int n;
    cout << "Inserisci la dimensione del vettore: ";
    cin >> n;
    cout << endl;

    cout << "Inserisci " << n << " numeri nel vettore: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << endl;

    int differenza = differenza_min_max(v, n);
    cout << "La differenza tra il valore massimo e il valore minimo del vettore è: " << differenza << endl;

    return 0;
}