#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
 * Dato un file di testo e una parola di input, il programma cerca la parola nel testo e visualizza quante volte è contenuta nel testo del file
 */

//Funzione per trasformare una stringa in tolower
string tolower(const string &s) {
    string risultato = s;
    for (int i = 0; i < risultato.size(); ++i) {
        if (risultato.at(i) >= 'A' && risultato.at(i) <= 'Z')
            risultato.at(i) = risultato.at(i) - 'A' + 'a';
    }
    return risultato;
}

int main() {
    string parola;

    cout << "Inserisci la parola da cercare: ";
    cin >> parola;

    ifstream in("../testo.txt");

    if (!in) {
        cout << "Apertura fallita." << endl;
        return 1;
    }

    string riga;
    int conta_occorrenze = 0;

    while (getline(in, riga)) {
        string riga_minuscola = tolower(riga);

        //Cerco la parola nella riga
        int pos = riga_minuscola.find(parola);

        while (pos != string::npos) {
            conta_occorrenze++;
            pos = riga_minuscola.find(parola, pos + 1);
        }
    }

    in.close();
    cout << "La parola '" << parola << "' si trova " << conta_occorrenze << " volte nel testo." << endl;

    return 0;
}