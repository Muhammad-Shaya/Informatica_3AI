#include <iostream>
#include <string>
using namespace std;

/*
 * La funzione elimina gli spazi iniziale e finali di una frase senza eliminare quelli in mezzo
 */

string elimina_spazi(const string &s)
{
    string m = s;
    int pos = 0;

    //Elimino gli spazi all'inizio
    while (m.at(pos) == ' '){
        m.erase(pos, 1);
    }

    //Elimino gli spazi alla fine
    while (m.at(m.size() - 1) == ' '){
        m.erase(m.size() - 1, m.size());
    }

    return m;
}

int main()
{
    string s;
    cout << "Inserisci una frase: ";
    getline(cin, s);
    cout << endl;

    cout << "La frase senza gli spazi all'inizio e alla fine è: " << endl;
    cout << elimina_spazi(s) << endl;

    return 0;
}