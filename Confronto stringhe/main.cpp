#include <iostream>
#include <string>
using namespace std;

/*
 * La funzione confronta due stringhe e restituisce:
 * -1 se la prima stringa precede la seconda in ordine alfabetico
 * 0 se sono uguali
 * 1 se la seconda precede la prima in ordine alfabetico
 */

int confronto_stringhe(const string &s1, const string &s2) {
    int lunghezza1 = s1.size();
    int lunghezza2 = s2.size();

    //Trovo la lunghezza minima tra le due stringhe
    int lunghezza_min;

    if (lunghezza1 < lunghezza2)
        lunghezza_min = lunghezza1;
    else
        lunghezza_min = lunghezza2;

    //Confronto i caratteri delle due stringhe
    for (int i = 0; i < lunghezza_min; i++) {
        char c1 = tolower(s1.at(i));
        char c2 = tolower(s2.at(i));

        if (c1 < c2)
            return -1; //La prima stringa precede la seconda
        else if (c1 > c2)
            return 1; //La seconda precede la prima
    }

    //Se i caratteri sono gli stessi fino alla lunghezza minima, la stringa più corta precede quella più lunga
    if (lunghezza1 < lunghezza2)
        return -1;
    else if (lunghezza1 > lunghezza2)
        return 1;
    else
        return 0; //Le due stringhe sono uguali
}

int main() {
    string s1, s2;

    cout << "Inserisci le due stringhe: " << endl;
    getline(cin, s1);
    getline(cin, s2);
    cout << endl;

    int risultato = confronto_stringhe(s1, s2);

    if (risultato == -1)
        cout << "La prima stringa precede la seconda in ordine alfabetico." << endl;
    else if (risultato == 0)
        cout << "Le due stringhe sono uguali." << endl;
    else
        cout << "La seconda stringa precede la prima in ordine alfabetico." << endl;

    return 0;
}