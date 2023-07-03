#include <iostream>
using namespace std;

/*
 * Dato un vettore, mi inverti la posizione degli elementi del vettore.
 * Esempio: 1 2 3 4 5 --> 5 4 3 2 1
 */

void inverti(int v[], int n) {
    int inizio = 0;
    int fine = n - 1;

    //Scambio degli elementi ai due estremi del vettore (inizio e fine)
    while (inizio < fine) {
        int temp = v[inizio];
        v[inizio] = v[fine];
        v[fine] = temp;

        //Aggiorno gli indici
        inizio++;
        fine--;
    }
}

int main() {
    const int MAX = 100;
    int v[MAX];
    int n;
    cout << "Inserisci la dimensione del vettore: ";
    cin >> n;
    cout << endl;

    cout << "Inserisci " << n << " numeri: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    cout << endl;

    //Inverto il vettore
    inverti(v, n);
    cout << "Vettore invertito: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}