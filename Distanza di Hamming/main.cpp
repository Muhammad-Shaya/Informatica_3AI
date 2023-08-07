#include <iostream>
#include <string>
using namespace std;

/*
 * La funzione calcola la distanza di hamming tra due stringhe
 * La distanza si ottiene guardando i caratteri delle due stringhe nella stessa posizione e contando quanti sono quelli differenti
 * Se le due stringhe sono uguali, la distanza è 0
 * Esempio --> "ciao" e "tiro" --> distanza = 2
 * Se le due stringhe hanno lunghezze diverse, la funzione torna -1
 */

int distanza_hamming(const string &s, const string &m){
    int conta = 0;

    //Controllo se sono diverse
    if (s.size() != m.size())
        return -1;

    //Se sono uguali, confronto ogni lettera delle due stringhe
    for (int i = 0; i < s.size(); ++i) {
        if (s.at(i) != m.at(i))
            conta++;
    }

    return conta;
}

int main(){
    string s, m;

    cout << "Inserisci due parole: " << endl;
    cin >> s >> m;
    cout << endl;

    if (distanza_hamming(s, m) == -1)
        cout << "Le due stringhe hanno lunghezze diverse." << endl;
    else
        cout << "La distanza di hamming è: " << distanza_hamming(s, m) << endl;

    return 0;
}

