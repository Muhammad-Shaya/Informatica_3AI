#include <iostream>
#include <string>
using namespace std;

/*
 * La struttura Studente memorizza i dati di uno studente (nome, sesso, anno di nascita) e memorizza anche i voti relativi alle discipline (italiano, inglese, matematica)
 * La funzione "piu_facile()" a partire da un vettore di studenti, determina la disciplina che ha la media dei voti più alta
 */

struct Voti {
    float italiano;
    float inglese;
    float matematica;
};

struct Studente {
    string nome;
    char sesso;
    int anno_di_nascita;
    Voti voti;
};

struct Classe {
    Studente studenti[20];
    int n_studenti;
};

void piu_facile(const Classe &classe) {
    float media_ita = 0.0, media_inglese = 0.0, media_mate = 0.0;

    for (int i = 0; i < classe.n_studenti; ++i) {
        media_ita += classe.studenti[i].voti.italiano;
        media_inglese += classe.studenti[i].voti.inglese;
        media_mate += classe.studenti[i].voti.matematica;
    }

    media_ita /= classe.n_studenti;
    media_inglese /= classe.n_studenti;
    media_mate /= classe.n_studenti;

    if (media_ita > media_inglese && media_ita > media_mate)
        cout << "La disciplina con la media più alta è italiano." << endl;
    else if (media_inglese > media_ita && media_inglese > media_mate)
        cout << "La disciplina con la media più alta è inglese." << endl;
    else
        cout << "La disciplina con la media più alta è matematica." << endl;
}

void menu() {
    cout << "MENU:" << endl << endl;
    cout << "1) Aggiungere uno studente" << endl;
    cout << "2) Determinare la disciplina con la media più alta" << endl;
    cout << "0) Esci" << endl;
    cout << endl;
}

int main() {
    Classe classe;
    classe.n_studenti = 0;

    int scelta;
    menu();
    cout << "Scegli cosa fare: ";
    cin >> scelta;

    while (scelta != 0) {
        switch (scelta) {
            case 1: {
                if (classe.n_studenti < 10) {
                    Studente new_studente;
                    cout << "Inserisci il nome dello studente: ";
                    cin >> new_studente.nome;
                    cout << "Inserisci il sesso dello studente (M/F): ";
                    cin >> new_studente.sesso;
                    cout << "Inserisci l'anno di nascita dello studente: ";
                    cin >> new_studente.anno_di_nascita;
                    cout << "Inserisci il voto in italiano dello studente: ";
                    cin >> new_studente.voti.italiano;
                    cout << "Inserisci il voto in inglese dello studente: ";
                    cin >> new_studente.voti.inglese;
                    cout << "Inserisci il voto in matematica dello studente: ";
                    cin >> new_studente.voti.matematica;

                    classe.studenti[classe.n_studenti] = new_studente;
                    classe.n_studenti++;
                } else {
                    cout << "Numero massimo di studenti raggiunto." << endl;
                }
            }
                break;

            case 2: {
                piu_facile(classe);
            }
                break;
        }

        cout << endl;
        menu();
        cout << "Scegli cosa fare: ";
        cin >> scelta;
    }

    return 0;
}