#include <iostream>
using namespace std;

/*
 * Leggere una sequenza di numeri fino alla lettura dello zero e scrivere quanti valori sono stati letti e la loro somma
 */

int main() {
    int numero = -1, conta = 0, somma = 0;
    cout << "Inserisci un numero: " << endl;
    while (numero != 0){
        cin >> numero;
        somma += numero;
        conta++;
    }
    conta--;

    cout << "Sono stati letti " << conta << " numeri (escluso lo 0) e la loro somma è " << somma << endl;

    return 0;
}
