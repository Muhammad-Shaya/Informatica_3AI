#include <iostream>
using namespace std;

/*
 * La funzione ha come parametri due matrici, una matrice di NxN elementi che si deve costruire e poi una matrice di NxN elementi (chiamata trasposta)
 * La trasposta di una matrice è una matrice in cui le posizioni degli elementi sono modificate scambiando gli indici di riga e colonna
 * Esempio --> matrice: {{2, 1, 5, 9},{0, 1, 8, 4},{2, 1, 9, 3},{6, 7, 0, 2}} --> matrice trasposta: {{2, 0, 2, 6},{1, 1, 1, 7},{5, 8, 9, 0},{9, 4, 3, 2}}
 */

const int N = 4;

void trasposta_matrice(int m_originale[][N], int m_trasposta[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            m_trasposta[j][i] = m_originale[i][j];
        }
    }
}

int main() {

    //Input matrice originale
    int m_originale[N][N] = {{2, 1, 5, 9}, {0, 1, 8, 4}, {2, 1, 9, 3}, {6, 7, 0, 2}};

    //Stampo la matrice originale
    cout << "Matrice originale: " << endl << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout.width(4);
            cout << m_originale[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //Dichiaro la matrice trasposta
    int m_trasposta[N][N];

    //Chiamo la funzione
    trasposta_matrice(m_originale, m_trasposta);

    //Stampo la matrice trasposta
    cout << "Matrice Trasposta: " << endl << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout.width(4);
            cout << m_trasposta[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}