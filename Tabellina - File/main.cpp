#include <iostream>
#include <fstream>
using namespace std;

/*
 * Dato un numero tra 1 e 10 inserito dall'utente, stampo in un file la tabellina del numero scelto
 */

int main() {
    int numero;

    cout << "Inserisci un numero tra 1 e 10: ";
    cin >> numero;
    ofstream out("../tabellina.txt");

    if (numero < 1 || numero > 10){
        cout << "Numero non valido." << endl;
        return 1;
    }

    if (!out){
        cout << "Apertura fallita." << endl;
        return 1;
    }

    for (int i = 0; i <= 10; ++i) {
        out << numero << " x " << i << " = " << numero * i << endl;
    }

    out.close();
    cout << "La tabellina del numero " << numero << " è stata scritta nel file 'tabellina.txt'." << endl;

    return 0;
}