#include <iostream>
using namespace std;

/*
 * La funzione va a calcolare la somme degli elementi che giacciono sulle cornici della matrice data come argomento
 * La cornice più esterna è formata dalla prima e ultima riga e dalla prima e ultima colonna, quella successiva dalla seconda e penultima riga e dalla seconda e penultima colonna e cosi via
 * In questo caso la matrice può essere di qualsiasi dimensione e quindi bisogna stare attenti se ce un numero dispari di colonne (ad esempio una matrice 5x5)
 */

const int MAX_RIGHE = 100;
const int MAX_COLONNE = 100;

int somma_cornici(int m[][MAX_COLONNE], int r, int c) {
    int somma = 0;

    //Calcolo la somma delle cornici
    for (int i = 0; i < r / 2; i++) {
        for (int j = i; j < c - i; j++) {
            somma += m[i][j]; //Cornice superiore
            somma += m[r - 1 - i][j]; //Cornice inferiore
        }
        for (int j = i + 1; j < r - 1 - i; j++) {
            somma += m[j][i]; //Cornice sinistra
            somma += m[j][c - 1 - i]; //Cornice destra
        }
    }

    //Se la matrice ha un numero dispari di colonne, aggiungo il numero al centro
    if (r % 2 != 0 && c % 2 != 0)
        somma += m[r / 2][c / 2];

    return somma;
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

    int somma = somma_cornici(m, righe, colonne);
    cout << "La somma degli elementi sulle cornici della matrice è: " << somma << endl;

    return 0;
}