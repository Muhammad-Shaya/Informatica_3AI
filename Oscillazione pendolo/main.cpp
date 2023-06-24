#include <iostream>
using namespace std;

/*
 * Un pendolo oscilla con un periodo (P) in secondi che è funzione della lunghezza (L) in metri del filo di sospensione: P = 6.2832 * radice di (L / g) dove g è 9.8 m/s^2
 */

//Funzione che determina la lunghezza del pendolo
double lunghezza(int P){
    double risultato;
    const double G = 9.81;
    const double N = 6.2832;
    risultato = G * ((P / N) * (P / N));   //formula inversa
    return risultato;
}

int main() {
    int P;
    cout << "Inserisci il periodo: ";
    cin >> P;

    double risultato = lunghezza(P);
    cout << "La lunghezza del pendolo è: " << risultato << endl;

    return 0;
}

