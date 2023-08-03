#include <iostream>
#include <string>
using namespace std;

/*
 * La funzione conta quante consonanti o vocali contiene una parola (l'utente specifica se vuole contare le consonanti o le vocali)
 */

int conta_consonanti_vocali(const string &s, char tipo) {
    int conta = 0;
    char carattere;

    for (int i = 0; i < s.size(); i++) {
        carattere = tolower(s.at(i)); //Converto in minuscolo

        if (tipo == 'C') {
            if ((carattere >= 'a' && carattere <= 'z') && (carattere != 'a' && carattere != 'e' && carattere != 'i' && carattere != 'o' && carattere != 'u'))
                conta++;
        } else if (tipo == 'V') {
            if (carattere == 'a' || carattere == 'e' || carattere == 'i' || carattere == 'o' || carattere == 'u')
                conta++;
        } else {
            return -1;
        }
    }
    return conta;
}

int main() {
    string s;
    char tipo;

    cout << "Inserisci una parola: ";
    cin >> s;

    cout << "Inserisci cosa vuoi contare: consonanti (C) o vocali (V): ";
    cin >> tipo;

    int risultato = conta_consonanti_vocali(s, toupper(tipo));

    if (toupper(tipo) == 'C')
        cout << "Numero di consonanti nella stringa: " << risultato << endl;
    else if (toupper(tipo) == 'V')
        cout << "Numero di vocali nella stringa: " << risultato << endl;
    else
        cout << "Carattere non valido" << endl;

    return 0;
}