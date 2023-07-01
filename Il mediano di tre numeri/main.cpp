#include <iostream>
using namespace std;

/*
 * Dati 3 numeri, la funzione va a calcolare il mediano dei tre numeri
 */

double mediano(double a, double b, double c){
    if ((a >= b && a <= c) || (a <= b && a >= c))
        return a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        return b;
    else
        return c;
}

int main() {
    double a, b, c;
    cout << "Inserisci tre numeri: " << endl;
    cin >> a >> b >> c;
    double risultato = mediano(a, b, c);
    cout << "Il mediano dei tre numeri è: " << risultato << endl;

    return 0;
}
