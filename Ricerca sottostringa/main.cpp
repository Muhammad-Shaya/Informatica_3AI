#include <iostream>
#include <string>
using namespace std;

int trova_sottostringa(const string &s1, const string &s2) {
    int pos = s1.find(s2);
    if (pos != string::npos)
        return pos;
    else
        return -1;
}


int main() {
    string s1, s2;

    cout << "Inserisci una frase: ";
    getline(cin, s1);
    cout << "Inserisci la parola/frase da cercare: ";
    getline(cin, s2);
    cout << endl;

    int risultato = trova_sottostringa(s1, s2);

    if (risultato != -1)
        cout << "La sottostringa si trova in posizione: " << risultato << endl;
    else
        cout << "La sottostringa non è presente" << endl;

    return 0;
}