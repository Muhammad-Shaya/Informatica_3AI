#include <iostream>
#include <string>
using namespace std;

/*
 * La funzione conta quanti caratteri della prima stringa sono presenti nella seconda stringa
 * Esempio --> "PIPPO" e "PIPPICALZELUNGHE" --> ci sono 4 caratteri della prima stringa nella seconda
 */

int conta_caratteri_comuni(const string &s1, const string &s2) {
    int conta = 0;

    for (int i = 0; i < s1.size(); ++i) {
        char c = tolower(s1.at(i));
        int trovata = s2.find(tolower(c));

        if (trovata != string::npos)
            conta++;
    }

    return conta;
}

int main() {
    string s1, s2;

    cout << "Inserisci una parola: ";
    cin >> s1;
    cout << "Inserisci una seconda parola: ";
    cin >> s2;
    cout << endl;

    int risultato = conta_caratteri_comuni(s1, s2);
    cout << s1 << " e " << s2 << " hanno in comune " << risultato << " caratteri." << endl;

    return 0;
}