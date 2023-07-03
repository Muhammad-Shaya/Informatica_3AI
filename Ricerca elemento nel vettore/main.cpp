#include <iostream>
using namespace std;

/*
 * Dato un vettore fatto da dei numeri interi forniti dall'utente, l'utente va a inserire dei numeri e il programma ti dice "Vero" se sono presenti nel vettore, "Falso" altrimenti
 * Ogni volta che l'utente inserisce un numero, la funzione verifica se il numero è presente (true) o meno (false)
 */

bool presenza_numero(int v[], int dimensione, int numero) {
    for (int i = 0; i < dimensione; i++) {
        if (v[i] == numero)
            return true;
    }
    return false;
}

int main() {
    const int MAX = 100;
    int v[MAX];
    int dimensione;

    cout << "Inserisci il numero degli elementi del vettore (max " << MAX << " valori): " << endl;
    cin >> dimensione;
    cout << endl;

    cout << "Inserisci " << dimensione << " numeri, (se digiti 0 ti fa uscire): " << endl;
    for (int i = 0; i < dimensione; ++i) {
        cin >> v[i];
        if (v[i] == 0)
            break;
    }
    cout << endl;

    //Richiesta di inserire dei numeri finchè l'utente non digita 0
    while (true) {
        int numero;
        cout << "Inserisci un numero (0 per uscire): ";
        cin >> numero;

        if (numero == 0)
            break;

        bool presente = presenza_numero(v, dimensione, numero);
        if (presente)
            cout << "Vero" << endl;
        else
            cout << "Falso" << endl;
    }
    return 0;
}