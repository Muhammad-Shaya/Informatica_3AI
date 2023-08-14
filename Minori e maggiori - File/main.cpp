#include <iostream>
#include <fstream>
using namespace std;

/*
 * Dato un file numeri.txt contenente valori interi e un valore intero N dato dall'utente, memorizzo i valori minori di N in un file minori.txt e quelli maggiori in un file maggiori.txt
 */

int main() {
    ifstream in("../numeri.txt");

    if (!in) {
        cout << "Apertura del file 'numeri.txt' fallita." << endl;
        return 1;
    }

    int N;
    cout << "Inserisci un valore intero N: ";
    cin >> N;
    cout << endl;

    ofstream minori_out("../minori.txt");
    ofstream maggiori_out("../maggiori.txt");

    if (!minori_out || !maggiori_out) {
        cout << "Apertura dei file 'minori.txt' e 'maggiori.txt' fallita." << endl;
        return 1;
    }

    int numero;  //Questo numero mi serve per capire quanti numeri ci sono dentro il file "numeri.txt"
    while (in >> numero) {
        if (numero < N)
            minori_out << numero << endl;
        else
            maggiori_out << numero << endl;
    }

    in.close();
    minori_out.close();
    maggiori_out.close();

    cout << "I numeri maggiori di " << N << " sono stati inseriti nel file 'maggiori.txt'. " << endl;
    cout << "I numeri minori di " << N << " sono stati inseriti nel file 'minori.txt'. " << endl;

    return 0;
}