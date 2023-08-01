#include <iostream>
using namespace std;

//DESCRIZIONE
/*
 * Data una matrice vi viene chiesto di effettuare una di queste operazioni in base al valore di S chiesto all'utente.
 * S = 1 trovare il valore massimo della matrice e le sue coordinate.
 * S = 2 trovare il valore minimo della matrice e le sue coordinate.
 */

//INPUT
/*
 * L'utente dovrà inserire in input il numero di righe (R) e colonne (C) della matrice e la scelta da effettuare (S) e in seguito dovrà inserire la matrice.
 */

//ESEMPI
/*
 * S == 1:
   R --> 3, C --> 4, S --> 1

   3 14 21 29
   7 43 12 44
   33 9 11 12

   max --> 44, posizione --> (1, 3)

 * S == 2:
   R --> 3, C --> 2, S --> 2

   3 14
   7 43
   33 9

   min --> 3, posizione --> (0, 0)
 */

const int MAX_RIGHE = 40, MAX_COLONNE = 40;
int m[MAX_RIGHE][MAX_COLONNE];

int main() {

    //Input
    int R, C, S;
    cout << "Inserisci il numero di righe e colonne della matrice: ";
    cin >> R >> C;
    cout << "Inserisci l'operazione da effettuare: ";
    cin >> S;

    cout << "Inserisci gli elementi della matrice:" << endl;
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> m[i][j];
        }
    }
    cout << endl;

    //Ricerca massimo (primo caso)
    int riga_max = 0, colonna_max = 0;  //Per ora il massimo si trova nella prima casella (0, 0)
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (m[i][j] > m[riga_max][colonna_max]){  //Se trovo una casella dove il numero è maggiore di quello iniziale, allora il massimo diventa quel numero e memorizzo la posizione del massimo
                riga_max = i;
                colonna_max = j;
            }
        }
    }

    //Ricerca minimo (secondo caso)
    int riga_min = 0, colonna_min = 0;
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (m[i][j] < m[riga_min][colonna_min]){
                riga_min = i;
                colonna_min = j;
            }
        }
    }

    //Stampa del primo caso
    if (S == 1)
        cout << "Il massimo della matrice è " << m[riga_max][colonna_max] << " e si trova in posizione (" << riga_max << ", " << colonna_max << ")." << endl;

    //Stampa del secondo caso
    if (S == 2)
        cout << "Il minimo della matrice è " << m[riga_min][colonna_min] << " e si trova in posizione (" << riga_min << ", " << colonna_min << ")." << endl;

    return 0;
}