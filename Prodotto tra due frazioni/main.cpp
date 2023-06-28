#include <iostream>
using namespace std;

/*
 * La funzione va a determinare il prodotto tra due frazioni.
 */

int MCD(int m, int n) {
    int resto = m % n;
    while (resto != 0){
        m = n;
        n = resto;
        resto = m % n;
    }
    return n;
}

//Funzione per semplificare una frazione
void semplifica_frazione(int &numeratore, int &denominatore) {
    int mcd = MCD(numeratore, denominatore);
    numeratore /= mcd;
    denominatore /= mcd;
}

//Funzione per il prodotto tra due frazioni
void prodotto_frazioni(int n1, int d1, int n2, int d2) {
    int risultato_n = n1 * n2;
    int risultato_d = d1 * d2;

    semplifica_frazione(risultato_n, risultato_d);
    cout << "Il prodotto delle due frazioni è: " << risultato_n << "/" << risultato_d << endl;
}

int main() {
    int n1, d1, n2, d2;

    cout << "Inserisci la prima frazione (numeratore e denominatore): " << endl;
    cin >> n1 >> d1;
    cout << "Inserisci la seconda frazione (numeratore e denominatore): " << endl;
    cin >> n2 >> d2;
    cout << endl;
    prodotto_frazioni(n1, d1, n2, d2);

    return 0;
}
