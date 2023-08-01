#include <iostream>
using namespace std;

/*
 * La funzione restituisce true se una matrice data come argomento è a predominanza diagonale, sennò false
 * Una matrice è a predominanza diagonale se per ogni riga il valore dell'elemento avente lo stesso indice di riga e colonna è il maggiore della riga
 * Esempio 1 --> {{3, 1, 1}, {2, 7, 2}, {1, 1, 5}}; --> è a predominanza diagonale
 * Esempio 2 --> {{3, 1, 1}, {2, 7, 2}, {1, 1, 0}}; --> NON è a predominanza diagonale
 */

const int N = 3;

bool predominanza_diagonale(int m[][N]) {
    for (int i = 0; i < N; i++) {
        int elemento_diagonale = m[i][i]; //Elemento sulla diagonale

        //Verifico se l'elemento di prima è maggiore rispetto a quelli della riga
        for (int j = 0; j < N; j++) {
            if (j != i && elemento_diagonale <= m[i][j])
                return false;
        }
    }
    return true;
}

int main() {
    int m[N][N] = {{3, 1, 1}, {2, 7, 2}, {1, 1, 5}};

    //Stampo la matrice
    cout << "Matrice: " << endl << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout.width(4);
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    //Chiamata della funzione
    if (predominanza_diagonale(m))
        cout << "La matrice è a predominanza diagonale." << endl;
    else
        cout << "La matric non è a predominanza diagonale." << endl;

    return 0;
}