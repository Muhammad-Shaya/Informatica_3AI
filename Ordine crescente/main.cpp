#include <iostream>
using namespace std;

/*
 * Dati N numeri, verificare se sono stati forniti in ordine crescente o meno
 */

bool verifica_crescente(int numeri[], int N) {
    for (int i = 1; i < N; ++i) {
        if (numeri[i] < numeri[i - 1])
            return false;
    }
    return true;
}

int main() {
    int N;
    const int MAX = 100;
    int numeri[MAX];
    cout << "Inserisci il numero di elementi del vettore: ";
    cin >> N;

    cout << "Inserisci i " << N << " numeri: ";
    for (int i = 0; i < N; ++i) {
        cin >> numeri[i];
    }

    if (verifica_crescente(numeri, N))
        cout << "La sequenza è in ordine crescente" << endl;
    else
        cout << "La sequenza non è in ordine crescente" << endl;

    return 0;
}
