#include <iostream>
using namespace std;

/*
 * Dato un valore k, leggere n numeri e contare quanti di essi sono maggiori, minori e uguali a k
 */

int main() {
    int n, k, maggiori = 0, numeri, minori = 0, uguali = 0;
    cout << "Inserisci un valore numerico k: ";
    cin >> k;
    cout << "Inserisci quanti valori vuoi leggere: ";
    cin >> n;
    cout << "Inserire " << n << " numeri: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numeri;
        if (numeri == k)
            uguali++;
        else if (numeri > k)
            maggiori++;
        else
            minori++;
    }
    cout << endl;
    cout << "I valori uguali a " << k << " sono: " << uguali << endl;
    cout << "I valori maggiori di " << k << " sono: " << maggiori << endl;
    cout << "I valori minori di " << k << " sono: " << minori << endl;

    return 0;
}
