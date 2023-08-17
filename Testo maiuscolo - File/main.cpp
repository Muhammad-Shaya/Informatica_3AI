#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
 * Dato un file di testo 'testo.txt' contenente un testo, il programma crea un file di testo 'maiuscolo.txt' trasforma il testo del primo file in maiuscolo.
 */

int main() {
    ifstream in("../testo.txt");
    if (!in) {
        cout << "Apertura del file 'testo.txt' fallita." << endl;
        return 1;
    }

    ofstream out("../maiuscolo.txt");
    if (!out) {
        cout << "Apertura del file 'maiuscolo.txt' fallita." << endl;
        return 1;
    }

    string riga;

    while (getline(in, riga)) {
        string riga_maiuscole = riga;
        for (int i = 0; i < riga_maiuscole.size(); ++i) {
            if (riga_maiuscole.at(i) >= 'a' && riga_maiuscole.at(i) <= 'z')
                riga_maiuscole.at(i) = riga_maiuscole.at(i) - 'a' + 'A';
        }
        out << riga_maiuscole << endl;
    }

    in.close();
    out.close();

    cout << "Il testo contenuto nel file 'testo.txt' è stato trasformato in maiuscolo nel file 'maiuscolo.txt'." << endl;

    return 0;
}