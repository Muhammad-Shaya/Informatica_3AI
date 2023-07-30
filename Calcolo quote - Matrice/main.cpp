#include <iostream>
using namespace std;

/*
 * La matrice rappresenta le quote di un'area rettangolare di territorio.
 * Le funzioni determinano la quota minima, massima e media.
 * In questo caso non viene specificato se la matrice è quadrata o meno ma io suppongo che sia quadrata
 */

const int N = 3;

//Calcolo della quota minima
int quota_minima(int m[][N]) {
    int quota_min = m[0][0]; //Suppongo che il primo elemento della m è quello minimo

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (m[i][j] < quota_min)
                quota_min = m[i][j];
        }
    }

    return quota_min;
}

//Calcolo della quota massima
int quota_massima(int m[][N]) {
    int quota_max = m[0][0];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (m[i][j] > quota_max)
                quota_max = m[i][j];
        }
    }

    return quota_max;
}

//Calcolo della quota media
double quota_media(int m[][N]) {
    double somma_quote = 0;
    int n_quote = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            somma_quote += m[i][j];
            n_quote++;
        }
    }

    //Calcolo della media
    double quota_media = somma_quote / n_quote;

    return quota_media;
}

int main() {

    int m[N][N] = {{10, 20, 30},{15, 25, 35},{12, 22, 32}};

    //Stampo la matrice
    cout << "Matrice: " << endl << endl;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout.width(4);
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    int quota_min = quota_minima(m);
    int quota_max = quota_massima(m);
    double quotaMedia = quota_media(m);

    cout << "Quota minima: " << quota_min << endl;
    cout << "Quota massima: " << quota_max << endl;
    cout << "Quota media: " << quotaMedia << endl;

    return 0;
}