#include <iostream>
using namespace std;

/*
 * Calcolo del MCD tra due numeri con Euclide
 * Se si ha una frazione la si riduce nella sua forma irriducibile
 * Esempio: 24, 36 --> MCD = 12 --> 2/3
 */

/*
 * Spiegazione di Euclide avendo due numeri (m, n):
 * 1) si determina il resto della divisione tra m ed n
 * 2) se il resto è 0 l'MCD è n
 * 3) si pone m uguale ad n
 * 4) si pone n uguale al resto e poi si riprende l'operazione dal passo 1
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

int main() {
    int numeratore, denominatore;
    cout << "Inserisci il numeratore: ";
    cin >> numeratore;
    cout << "Inserisci il denominatore: ";
    cin >> denominatore;
    cout << endl;

    int mcd = MCD(numeratore, denominatore);
    cout << "L'MCD tra " << numeratore << " e " << denominatore << " è: " << mcd << endl;

    //Semplificazione della frazione (se possibile)
    semplifica_frazione(numeratore, denominatore);
    if (denominatore != 1)
        cout << "La frazione irriducibile è: " << numeratore << "/" << denominatore << endl;
    else
        cout << "La frazione irriducibile è: " << numeratore << endl;

    return 0;
}
