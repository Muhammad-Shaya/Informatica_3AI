#include <iostream>
using namespace std;

/*
 * La funzione ha come parametri un vettore, la sua dimensione e un intero K
 * Lo scopo è quello di spostare gli elementi del vettore di K posizioni in avanti nel vettore, considerando il vettore circolare
 * In un vettore circolare gli elementi che escono dal vettore a causa dello spostamento devono rientrare dall'inizio
 * L'esercizio può essere fatto con un vettore temporaneo o anche senza
 */

void sposta_elementi(int v[], int n, int K) {
    //K deve essere compreso tra 0 e n - 1
    K %= n;

    //Creo un vettore temporaneo per salvarmi gli elementi spostati
    int temp[K];

    //Copio gli ultimi K elementi in temp
    int indice_temp = 0;
    for (int i = n - K; i < n; i++) {
        temp[indice_temp] = v[i];
        indice_temp++;
    }

    //Sposto gli altri elementi di K posizioni in avanti
    for (int i = n - 1; i >= K; i--) {
        v[i] = v[i - K];
    }

    //Copio gli elementi salvati in temp nelle prime K posizioni
    for (int i = 0; i < K; i++) {
        v[i] = temp[i];
    }
}

int main() {
    const int MAX = 100;
    int v[MAX];
    int n;
    cout << "Inserisci la dimensione del vettore: ";
    cin >> n;
    cout << endl;

    cout << "Inserisci " << n << " numeri nel vettore:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << endl;

    int K;
    cout << "Inserisci il numero di posizioni da spostare: ";
    cin >> K;
    cout << endl;

    sposta_elementi(v, n, K);
    cout << "Il vettore spostato è: ";
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}