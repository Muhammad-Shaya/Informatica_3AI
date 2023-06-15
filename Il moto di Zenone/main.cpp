#include <iostream>
using namespace std;

/*
 * Dovendo percorrere una certa distanza si deve coprire con uno spostamento metà della distanza e con un secondo spostamento metà della distanza rimanente e cosi via
 * Data la distanza da percorrere e il numero di spostamenti, calcolare la distanza effettivamente coperta
 */

int main() {
    float distanza, distanza_effettiva = 0, spostamento;
    int n_spostamenti;
    cout << "Inserire una distanza: ";
    cin >> distanza;
    cout << "Inserire i spostamenti effettuati: ";
    cin >> n_spostamenti;
    spostamento = distanza / 2;

    for (int i = 0; i < n_spostamenti; ++i) {
        distanza_effettiva += spostamento;
        spostamento /= 2;
    }

    cout << "La distanza effettivamente coperta è: " << distanza_effettiva << endl;

    return 0;
}
