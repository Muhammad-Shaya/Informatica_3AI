#include <iostream>
using namespace std;

/*
 * La funzione MCM va a implementare la funzione MCD e va a calcolare l'MCM (minimo comune multiplo) tra due interi
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

int MCM(int m, int n) {
    int mcm = (m * n) / MCD(m, n);
    return mcm;
}

int main() {
    int num1, num2;
    cout << "Inserisci i due numeri: " << endl;
    cin >> num1 >> num2;

    int risultato = MCM(num1, num2);
    cout << "L'MCM tra " << num1 << " e " << num2 << " è: " << risultato << endl;

    return 0;
}