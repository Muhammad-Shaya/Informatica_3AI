#include <iostream>
#include <fstream>
using namespace std;

/*
 * Data una sequenza di numeri interi positivi e negativi inseriti dall'utente (0 per terminare) si memorizzano i numeri positivi in un file e quelli negativi in un altro
 */

int main() {
    ofstream pos_out("../positivi.txt");
    ofstream neg_out("../negativi.txt");

    if (!pos_out || !neg_out) {
        cout << "Apertura fallita." << endl;
        return 1;
    }

    int n;
    cout << "Inserisci dei numeri positivi e negativi (0 per terminare): " << endl;

    do {
        cin >> n;

        if (n > 0)
            pos_out << n << endl;
        else if (n < 0)
            neg_out << n << endl;

    } while (n != 0);

    pos_out.close();
    neg_out.close();

    return 0;
}