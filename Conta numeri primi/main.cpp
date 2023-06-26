#include <iostream>
using namespace std;

/*
 * La prima funzione verifica se un numero è primo o no
 * La seconda visualizza quanti numeri primi ci sono tra 1 e il valore dato in input
 * La terza dice anche quali sono
 */

bool primo(int numero) {
    if (numero <= 1)
        return false;

    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0)
            return false;
    }
    return true;
}

int conta_primi(int n) {
    int conta = 0;

    for (int i = 2; i <= n; ++i) {
        if (primo(i))
            conta++;
    }

    return conta;
}

void stampa_primi(int n) {
    for (int i = 2; i <= n; ++i) {
        if (primo(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int valore;

    cout << "Inserisci un numero: ";
    cin >> valore;

    //Verifica della prima funzione
    if (primo(valore))
        cout << valore << " è un numero primo :D" << endl;
    else
        cout << valore << " non è un numero primo :(" << endl;

    //Verifica della seconda e terza funzione
    int conta = conta_primi(valore);
    cout << "Ci sono " << conta << " numeri primi compresi tra 1 e " << valore << " e sono: ";
    stampa_primi(valore);

    return 0;
}
