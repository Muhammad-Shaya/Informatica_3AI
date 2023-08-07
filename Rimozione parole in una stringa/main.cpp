#include <iostream>
#include <string>
using namespace std;

/*
 * Input --> S (stringa iniziale), V (stringa da eliminare), T (stringa finale)
 * Attenzione --> V si può trovare dentro S in ogni posizione e può essere scritta al contrario
 * Si suppone che siano tutte lettere minuscole
 * Esempio 1 --> S = "alpiumabero", V = "piuma", T = "albero"
 * Esempio 2 --> S = "cucciolocane", V = "cane", T = "cucciolo"
 * Esempio 3 --> S = "gerasoranio", V = "rosa", T = "geranio"
 * Esempio 4 --> S = "fragola", V = "piuma", T = "La parola fragola non contiene al suo interno piuma"
 */

int main() {
    string S, V, T;

    //Input
    cout << "Inserisci una frase (senza spazi): ";
    cin >> S;
    cout << "Inserisci una parola da eliminare nella frase: ";
    cin >> V;
    cout << endl;

    //Cerco la posizione di V in S
    int cerca_pos = S.find(V);
    if (cerca_pos != string::npos) {
        T = S.erase(cerca_pos, V.size());  //Rimuovo V da S
    } else {
        string T_inverso;

        //Costruisco la stringa T al contrario
        int i = V.size() - 1;   //Parto dal fondo (stringa V)
        while (i >= 0) {  //Finchè la i è >= 0, aggiungo il carattere che si trova all'indice i alla stringa e decremento di 1
            T_inverso += V.at(i);
            i--;
        }

        //Cerco T_inverso in S
        cerca_pos = S.find(T_inverso);
        if (cerca_pos != string::npos)
            T = S.erase(cerca_pos, T_inverso.size()); //Rimuovo T_inverno da S
        else
            T = "La parola " + S + " non contiene al suo interno " + V;
    }

    cout << "La parola finale è: " << T << endl;

    return 0;
}