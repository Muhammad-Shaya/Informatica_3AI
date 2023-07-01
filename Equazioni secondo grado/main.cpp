#include <iostream>
#include <cmath>
using namespace std;

/*
 * Scopo: calcolare i due risultati di una equazione di secondo grado (se esistono le soluzioni)
 */

//Calcolo del delta
float delta(float a, float b, float c){
    return b*b - 4*a*c;
}

//Verifica della equazione e calcolo dei risultati
bool equazioni_secondo_grado(float a, float b, float c, float &x1, float &x2){
    if (delta(a,b,c) > 0){
        x1 = (-b + sqrt(delta(a,b,c))) / (2 * a);
        x2 = (-b - sqrt(delta(a,b,c))) / (2 * a);
        return true;
    }else{
        return false;
    }
}

int main() {
    float a, b, c;
    float x1, x2;

    cout << "Inserisci i 3 coefficienti dell'equazione: " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ",
    cin >> c;
    cout << endl;

    if (equazioni_secondo_grado(a, b, c, x1, x2)) {
        cout << "I risultati dell'equazione sono: " << endl;
        cout << "x1 = " << x1 << ", x2 = " << x2 << endl;
    }else{
        cout << "L'equazione non ha soluzioni" << endl;
    }

    return 0;
}