#include <iostream>
using namespace std;

/*
 * La funzione restituisce "true" se una matrice quadrata di NxN è simmetrica, senno restituisce "false"
 * Una matrice è simmetrica se gli elementi in posizione simmetrica rispetto alla diagonale principale sono tutti uguali
 */

const int N = 3;

bool simmetrica(int m[][N]){
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            if(m[i][j] != m[j][i])
                return false;
        }
    }
    return true;
}

int main() {

    //Input matrice --> in questo caso la matrice è simmetrica
    int m[N][N] = {{1, 2, 3},{2, 4, 7},{3, 7, 11}};

    //Stampa della matrice
    cout << "La matrice è: " << endl << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout.width(5);
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //Stampa del risultato
    if (simmetrica(m))
        cout << "La matrice è simmetrica." << endl;
    else
        cout << "La matrice non è simmetrica." << endl;

    return 0;
}