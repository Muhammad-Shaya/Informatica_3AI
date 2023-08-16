#include <iostream>
#include <fstream>
using namespace std;

/*
 * Dato un file 'alfa.txt' contenente dei numeri in ordine crescente, l'utente da in input un numero n e questo viene inserito in un nuovo file 'beta.txt' contenente i numeri del primo file più n in modo che risulti in ordine crescente
 */

int main() {
    ifstream in("../alfa.txt");
    if (!in) {
        cout << "Apertura del file 'alfa.txt' fallita." << endl;
        return 1;
    }

    ofstream out("../beta.txt");
    if (!out) {
        cout << "Apertura del file 'beta.txt' fallita." << endl;
        return 1;
    }

    int n;
    cout << "Inserisci un numero da inserire nel file 'alfa.txt': ";
    cin >> n;

    int numero;
    bool inserito = false;

    while (in >> numero) {
        if (numero > n && !inserito) {  //Se il numero è maggiore di n e se n non è stato inserito nell'insieme, inserisco il valore n nel file beta.txt e a quel punto il valore n sarà stato inserito
            out << n << endl;
            inserito = true;
        }
        out << numero << endl;
    }

    if (!inserito)
        out << n << endl;

    in.close();
    out.close();

    cout << "Il numero " << n << " è stato inserito nel file 'beta.txt' in ordine crescente. " << endl;

    return 0;
}