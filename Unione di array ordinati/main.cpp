#include <iostream>
using namespace std;

/*
 * Dati due vettori numerici ordinati, costruire un terzo vettore
 * Il terzo vettore deve essere di dimensioni pari alla somma delle due dimensioni e contenente tutti gli elementi dei due vettori in modo ordinato
 * Esempio: {1, 2, 4} e {1, 3, 9} --> {1, 1, 2, 3, 4, 9}
 */

void unisci_array(const int v1[], const int v2[], int v1_size, int v2_size, int v3[]) {
    int i = 0, j = 0, k = 0;

    while (i < v1_size && j < v2_size) {
        if (v1[i] < v2[j]) {
            v3[k] = v1[i];
            i++;
        } else {
            v3[k] = v2[j];
            j++;
        }
        k++;
    }

    while (i < v1_size) {
        v3[k] = v1[i];
        i++;
        k++;
    }

    while (j < v2_size) {
        v3[k] = v2[j];
        j++;
        k++;
    }
}

int main() {
    const int v1_size = 3;
    const int v2_size = 3;

    int v1[v1_size] = {1, 2, 4};
    int v2[v2_size] = {1, 3, 9};
    int v3[v1_size + v2_size];

    cout << "Vettore 1: ";
    for (int i = 0; i < v1_size; ++i) {
        cout << v1[i] << " ";
    }
    cout << endl;

    cout << "Vettore 2: ";
    for (int i = 0; i < v2_size; ++i) {
        cout << v2[i] << " ";
    }
    cout << endl << endl;

    unisci_array(v1, v2, v1_size, v2_size, v3);
    cout << "Vettore 3 (unione ordinata): ";
    for (int i = 0; i < v1_size + v2_size; i++) {
        cout << v3[i] << " ";
    }
    cout << endl;

    return 0;
}