#include <iostream>
using namespace std;

/*
 * L'incremento del popolo tra un anno e quello dopo è dato dal prodotto del tasso di accrescimento per la dimensione del popolo
 * Input --> anno iniziale, valore della dimensione del popolo iniziale, tasso di accrescimento, anno finale
 * Output --> i valori della dimensione del popolo anno per anno
 */

int main() {
    int inizio, fine, popolazione_iniziale;
    double tasso;
    cout << "Inserisci l'anno iniziale della simulazione: ";
    cin >> inizio;
    cout << "Inserisci la dimensione iniziale della popolazione: ";
    cin >> popolazione_iniziale;
    cout << "Inserisci il tasso di accrescimento (es. 0.01 per 1%): ";
    cin >> tasso;
    cout << "Inserisci l'anno finale della simulazione: ";
    cin >> fine;
    cout << endl;

    cout << "Anno: Popolazione:" << endl;
    cout << inizio << " \t " << popolazione_iniziale << endl;
    for (int i = inizio + 1; i <= fine; i++) {
        popolazione_iniziale += (popolazione_iniziale * tasso);
        cout << i << " \t " << popolazione_iniziale << endl;
    }

    return 0;
}

