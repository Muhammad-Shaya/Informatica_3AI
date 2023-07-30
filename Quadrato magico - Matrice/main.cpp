#include <iostream>
using namespace std;

/*
 * La funzione restituisce "true" se una matrice NxN è un quadrato magico, senno "false"
 * Una matrice è un quadrato magico se contiene tutti i numeri da 1 a n^2 e la somma di tutte le righe e colonne è costante
 */

const int N = 3;

bool quadrato_magico(int m[][N]) {
    //Calcolo la somma di tutti i numeri nella matrice --> la somma di tutte le righe e colonne deve essere uguale a questa somma
    int somma_totale = N * (N * N + 1) / 2;

    //Controllo la somma delle righe
    for (int i = 0; i < N; i++) {
        int somma_riga = 0;
        for (int j = 0; j < N; j++) {
            somma_riga += m[i][j];
        }
        if (somma_riga != somma_totale)
            return false;
    }

    //Controllo la somma delle colonne
    for (int j = 0; j < N; j++) {
        int somma_colonne = 0;
        for (int i = 0; i < N; i++) {
            somma_colonne += m[i][j];
        }
        if (somma_colonne != somma_totale)
            return false;
    }
    return true;
}

int main() {

    //Esempio dove la matrice è un quadrato magico
    int m1[N][N] = {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}};

    cout << "Prima matrice: " << endl << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout.width(4);
            cout << m1[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    if (quadrato_magico(m1))
        cout << "La matrice è un quadrato magico." << endl;
    else
        cout << "La matrice non è un quadrato magico." << endl;

    cout << endl;

    //Esempio dove la matrice NON è un quadrato magico
    int m2[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << "Seconda matrice: " << endl << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout.width(4);
            cout << m2[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    if (quadrato_magico(m2))
        cout << "La matrice è un quadrato magico." << endl;
    else
        cout << "La matrice non è un quadrato magico." << endl;

    return 0;
}