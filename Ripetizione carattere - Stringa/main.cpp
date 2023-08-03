#include <iostream>
#include <string>
using namespace std;

/*
 * Data una frase / parola, il programma dice quale è il carattere che si ripete più volte dentro la frase / parola e inoltre dice anche il numero di ripetizioni del carattere
 */

int main() {
    string s;
    cout << "Inserisci una frase: ";
    getline(cin, s);

    //Trasformo tutti i caratteri in minuscoli con il tolower()
    for (int i = 0; i < s.size(); ++i) {
        s.at(i) = tolower(s.at(i));
    }

    char ripetuto = ' '; //Carattere che si ripete più volte
    int max_conta = 0; //Numero di ripetizioni del carattere

    for (int i = 0; i < s.size(); ++i) {
        char carattere_corrente = s.at(i);
        int conta_corrente = 0;

        //Controllo quante volte si trova il carattere corrente nella stringa
        for (int j = 0; j < s.size(); ++j) {
            if (s.at(j) == carattere_corrente)
                conta_corrente++;
        }

        //Se il carattere corrente si ripete più volte del carattere più ripetuto per ora, aggiorno la variabile ripetuto e max_conta
        if (conta_corrente > max_conta) {
            ripetuto = carattere_corrente;
            max_conta = conta_corrente;
        }
    }

    cout << "Il carattere che si ripete più volte è: " << ripetuto << " (ripetuto " << max_conta << " volte)" << endl;

    return 0;
}