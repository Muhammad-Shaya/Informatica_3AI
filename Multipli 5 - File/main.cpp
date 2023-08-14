#include <iostream>
#include <fstream>
using namespace std;

/*
 * Data una sequenza di numeri interi inseriti dall'utente (0 per terminare) si memorizzano in un file .txt i multipli di 5
 */

int main() {
    ofstream out("../multipli5.txt");

    if (!out) {
        cout << "Apertura fallita." << endl;
        return 1;
    }

    int n;
    cout << "Inserisci una sequenza di interi (0 per terminare):" << endl;

    while (true) {
        cin >> n;

        if (n == 0)
            break;

        if (n % 5 == 0)
            out << n << endl;
    }

    out.close();

    return 0;
}