#include <iostream>
#include <string>
using namespace std;

/*
 * La funzione ritorna la somma dei valori ASCII delle singole lettere della stringa
 * Esempio --> "ciao" --> 'c' = 99, 'i' = 105, 'a' = 97, 'o' = 111 --> 412
 */

int ASCII(const string &s){
    int somma = 0;
    for (int i = 0; i < s.size(); ++i) {
        somma += s.at(i);
    }
    return somma;
}

int main() {
    string s;
    cout << "Inserisci una parola: ";
    cin >> s;
    cout << endl;

    cout << "La somma dei valori ASCII delle singole lettere della parola " << s << " è: " << ASCII(s) << endl;

    return 0;
}