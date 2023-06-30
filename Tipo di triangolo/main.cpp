#include <iostream>
#include <string>
using namespace std;

/*
 * Dati 3 lati, la funzione va a determinare se un triangolo è equilatero, isoscele o scaleno
 * Si propone all'utente di rifare l'esercizio se vuole --> S = si, N = no
 */

string triangolo(int lato1, int lato2, int lato3) {
    if (lato1 == lato2 && lato1 != lato3)
    return "isoscele";
    else if (lato1 == lato2 && lato1 == lato3)
    return "equilatero";
    else
    return "scaleno";
}

int main() {
  int lato1, lato2, lato3;
  char rifare = 'S';

    while (rifare == 'S' || rifare == 's'){
        cout << "Inserisci la lunghezza dei tre lati: " << endl;
        cin >> lato1 >> lato2 >> lato3;

        string tipo_triangolo = triangolo(lato1, lato2, lato3);
        cout << "Il triangolo è di tipo " << tipo_triangolo << endl << endl;

        cout << "Vuoi rifare l'esercizio? (S/N): ";
        cin >> rifare;
        cout << endl;
    }

  return 0;
}