#include <iostream>
using namespace std;

/*
 * La funzione verifica se un anno è bisestile (1) o meno (0)
 */

int bisestile(int anno) {
    if ((anno % 4 == 0 && anno % 100 != 0) || anno % 400 == 0)
        return 1;
    else
        return 0;
}

int main() {
    int anno;

    cout << "Inserisci un anno: ";
    cin >> anno;

    if (bisestile(anno))
        cout << "L'anno " << anno << " è un anno bisestile" << endl;
    else
        cout << "L'anno " << anno << " non è un anno bisestile" << endl;

    return 0;
}


