#include <iostream>
using namespace std;

/*
 * La funzione restituisce il valore massimo di una matrice di dimensione NxN (in questo caso 3x3) e le sue coordinate (riga, colonna)
 */

const int N = 3;

int trova_massimo(int m[][N], int &r, int &c){
    r = 0;
    c = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (m[i][j] > m[r][c]){  //Se l'elemento di ora è maggiore del massimo trovato finora:
                r = i;  //Salva l'indice di riga
                c = j;  //Salva l'indice di colonna
            }
        }
    }
    return m[r][c]; //Restituisco il valore massimo trovato
}

int main() {
    int m[N][N];
    cout << "Inserisci " << N * N << " numeri nella matrice: "  << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "(" << i << ", " << j << "): ";
            cin >> m[i][j];
        }
    }

    int r, c, max;
    max = trova_massimo(m, r, c);
    cout << endl;

    cout << "Il valore massimo è " << max << " e si trova in posizione (" << r << ", " << c << ")" << endl;
    return 0;
}