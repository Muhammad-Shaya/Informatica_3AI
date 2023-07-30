#include <iostream>
using namespace std;

/*
 * La funzione verifica se una matrice è ordinata per righe o no
 * Una matrice è ordinata per righe se gli elementi di ogni riga sono in ordine crescente da sinistra a destra e tutti gli elementi di ogni riga (esclusa la prima) sono maggiori di ciascuno degli elementi della riga precedente
 * Esempio 1 --> {{1, 2, 3},{4, 5, 6},{7, 8, 9}}; --> la matrice è ordinata per righe
 * Esempio 2 --> {{1, 2, 3},{0, 5, 6},{7, 8, 9}}; --> la matrice non è ordinata per righe
 */

const int MAX_RIGHE = 100;
const int MAX_COLONNE = 100;

bool matrice_ordinata(int m[][MAX_COLONNE], int righe, int colonne) {
    for (int i = 0; i < righe - 1; ++i) {
        for (int j = 0; j < colonne; ++j) {
            if (m[i][j] > m[i + 1][j])
                return false;
        }
    }
    return true;
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

    bool ordinata = matrice_ordinata(m, righe, colonne);
    if (ordinata)
        cout << "La matrice è ordinata per righe." << endl;
    else
        cout << "La matrice non è ordinata per righe." << endl;

    return 0;
}