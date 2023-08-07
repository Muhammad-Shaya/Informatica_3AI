#include <iostream>
#include <string>
using namespace std;

/*
 * Il formato Camel consiste nel trasformare una frase con parole separate da '_' in una frase con parole attaccate ma che si distinguono con la lettere maiuscola
 * Il formato snake è il contrario
 * Esempio formato da snake a camel --> "variabile_in_notazione_snake_case" --> "VariabileInNotazioneSnakeCase"
 * Esempio formato da camel a snake --> "VariabileInNotazioneSnakeCase" --> "variabile_in_notazione_snake_case"
 */

string camel_case(const string &s){
    //Trasformo la prima lettera in maiuscola
    string r = s;
    r.at(0) = r.at(0) - 'a' + 'A';

    //Cerco i trattini
    int pos = 0;
    while (r.find('_', pos) != string::npos){
        pos = r.find('_', pos);
        r.erase(pos, 1);
        r.at(pos) = r.at(pos) - 'a' + 'A';   //Trasformo la lettera dopo il trattino in maiuscola
        pos++;
    }

    return r;
}

string snake_case(const string &s){
    string r = s;

    r.at(0) = r.at(0) - 'A' + 'a';

    for (int i = 1; i < r.size(); ++i) {
        //Se trovo dei caratteri maiuscoli, li trasformo in minuscoli e poi inserisco il trattino prima della lettera minuscola
        if (r.at(i) >= 'A' && r.at(i) <= 'Z'){
            r.at(i) = r.at(i) - 'A' + 'a';
            r.insert(i, "_");
        }
    }

    return r;
}

int main()
{
    string snake, camel;

    cout << "Inserisci una frase in notazione snake: ";
    cin >> snake;
    cout << endl;

    cout << "La frase in notazione camel è: " << camel_case(snake) << endl;
    cout << endl;

    cout << "Inserisci una frase in notazione camel: ";
    cin >> camel;
    cout << endl;

    cout << "La frase in notazione snake è: " << snake_case(camel) << endl;

    return 0;
}