#include <iostream>
using namespace std;

/*
 * La funzione, a partire da una matrice RxC elementi, costruisce due vettori di R elementi che contengono rispettivamente i valori minimi e massimi di ogni riga della matrice
 */

const int MAX_RIGHE = 100;
const int MAX_COLONNE = 100;

// Funzione per trovare il valore minimo e massimo in una riga della m
void trova_min_max(int m[][MAX_COLONNE], int r, int c, int v_min[], int v_max[]) {
    for (int i = 0; i < r; i++) {
        int minimo = m[i][0];
        int massimo = m[i][0];

        for (int j = 1; j < c; j++) {
            if (m[i][j] < minimo)
                minimo = m[i][j];

            if (m[i][j] > massimo)
                massimo = m[i][j];
        }

        v_min[i] = minimo;
        v_max[i] = massimo;
    }
}

int main() {
    int righe, colonne;
    cout << "Inserisci il numero di righe: ";
    cin >> righe;
    cout << "Inserisci il numero di colonne: ";
    cin >> colonne;

    int m[MAX_RIGHE][MAX_COLONNE];
    cout << "Inserisci gli elementi della matrice:" << endl;
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < colonne; j++) {
            cin >> m[i][j];
        }
    }
    cout << endl;

    int v_min[MAX_RIGHE];
    int v_max[MAX_RIGHE];
    trova_min_max(m, righe, colonne, v_min, v_max);

    cout << "Valori minimi per ogni riga:" << endl;
    for (int i = 0; i < righe; i++) {
        cout << "Riga " << i << ": " << v_min[i] << endl;
    }
    cout << endl;

    cout << "Valori massimi per ogni riga:" << endl;
    for (int i = 0; i < righe; i++) {
        cout << "Riga " << i << ": " << v_max[i] << endl;
    }

    return 0;
}