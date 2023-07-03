#include <iostream>
using namespace std;

/*
 * Dato un vettore di dimensione N, calcola il massimo, il minimo e la media degli elementi del vettore
 */

void min_max_media(int v[], int n, int &minimo, int &massimo, double &media){
    minimo = v[0];
    massimo = v[0];
    int somma = v[0];

    //Calcolo del minimo e del massimo e la somma degli elementi
    for (int i = 1; i < n; i++){
        if (v[i] < minimo)
            minimo = v[i];
        if (v[i] > massimo)
            massimo = v[i];
        somma += v[i];
    }

    //Calcolo la media
    media = (double)somma / n;
}

int main()
{
    //Elementi del vettore chiesti all'utente:
    /*
     * const int MAX = 100;
     * int N;
     * int v[MAX];
     * cout << "Inserisci il numero degli elementi del vettore: ";
     * cin >> N; 
     * cout << "Inserisci i " << N << " numeri: ";
     * for (int i = 0; i < N; ++i) {
     *     cin >> v[i];
     * }
     */

    //Elementi del vettore già inseriti
    const int N = 5;
    int v[N] = {12, 7, 23, 4, 16 };
    int minimo, massimo;
    double media;

    //Stampa degli elementi del vettore
    cout << "Gli elementi del vettore sono: " << endl;
    for (int i = 0; i < N; ++i) {
        cout << v[i] << " ";
    }
    cout << endl << endl;

    //Stampa del minimo, massimo e media
    min_max_media(v, N, minimo, massimo, media);
    cout << "Minimo: " << minimo << endl;
    cout << "Massimo: " << massimo << endl;
    cout << "Media: " << media << endl;

    return 0;
}


