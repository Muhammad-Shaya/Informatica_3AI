#include <iostream>
#include <string>
using namespace std;

/*
 * I libri di una biblioteca sono identificati attraverso un codice
 * La struttura libro contiene le informazioni riguardanti un libro (codice, titolo, autore, anno di pubblicazione, editore) e queste informazioni vengono memorizzate in un vettore di strutture
 * All'avvio del programma viene stampato un menu ed attraverso quello l'utente inserisce cio che vuole fare
 * Attenzione --> quando si inserisce il titolo, l'autore e l'editore del libro, usare i '_' per separare le parole
 */

struct Libro {
    int codice;
    string titolo;
    string autore;
    int anno_pubblicazione;
    string editore;
};

struct Biblioteca {
    Libro collezione[100];
    int n_libri;
};

void menu() {
    cout << "MENU:" << endl << endl;
    cout << "1) Aggiungi un nuovo libro" << endl;
    cout << "2) Visualizza elenco libri" << endl;
    cout << "3) Visualizza informazioni di un libro per codice" << endl;
    cout << "4) Visualizza informazioni di un libro per titolo" << endl;
    cout << "0) Esci" << endl;
    cout << endl;
}

void aggiungi_libro(Biblioteca &biblioteca) {
    if (biblioteca.n_libri < 100) {
        Libro new_libro;
        cout << "Inserisci il codice del libro: ";
        cin >> new_libro.codice;
        cout << "Inserisci il titolo del libro: ";
        cin >> new_libro.titolo;
        cout << "Inserisci l'autore del libro: ";
        cin >> new_libro.autore;
        cout << "Inserisci l'anno di pubblicazione del libro: ";
        cin >> new_libro.anno_pubblicazione;
        cout << "Inserisci l'editore del libro: ";
        cin >> new_libro.editore;

        biblioteca.collezione[biblioteca.n_libri] = new_libro;
        biblioteca.n_libri++;
    } else {
        cout << "Collezione di libri piena." << endl;
    }
}

void visualizza_elenco_libri(const Biblioteca &biblioteca) {
    cout << "Elenco dei libri nella collezione:" << endl;
    for (int i = 0; i < biblioteca.n_libri; ++i) {
        cout << "Codice: " << biblioteca.collezione[i].codice << " | Titolo: " << biblioteca.collezione[i].titolo << endl;
    }
}

void visualizza_info_codice(const Biblioteca &biblioteca, int codice) {
    for (int i = 0; i < biblioteca.n_libri; ++i) {
        if (biblioteca.collezione[i].codice == codice) {
            cout << "Informazioni del libro con codice " << codice << ":" << endl;
            cout << "Titolo: " << biblioteca.collezione[i].titolo << endl;
            cout << "Autore: " << biblioteca.collezione[i].autore << endl;
            cout << "Anno di pubblicazione: " << biblioteca.collezione[i].anno_pubblicazione << endl;
            cout << "Editore: " << biblioteca.collezione[i].editore << endl;
        }
    }
}

void visualizza_info_titolo(const Biblioteca &biblioteca, const string &titolo) {
    for (int i = 0; i < biblioteca.n_libri; ++i) {
        if (biblioteca.collezione[i].titolo == titolo) {
            cout << "Informazioni sul libro con titolo '" << titolo << "':" << endl;
            cout << "Codice: " << biblioteca.collezione[i].codice << endl;
            cout << "Autore: " << biblioteca.collezione[i].autore << endl;
            cout << "Anno di pubblicazione: " << biblioteca.collezione[i].anno_pubblicazione << endl;
            cout << "Editore: " << biblioteca.collezione[i].editore << endl;
        }
    }
}

int main() {
    Biblioteca biblioteca;
    biblioteca.n_libri = 0;

    int scelta;
    menu();
    cout << "Scegli cosa fare: ";
    cin >> scelta;

    while (scelta != 0) {
        switch (scelta) {
            case 1:
                aggiungi_libro(biblioteca);
                break;

            case 2:
                visualizza_elenco_libri(biblioteca);
                break;

            case 3: {
                int codice;
                cout << "Inserisci il codice del libro: ";
                cin >> codice;
                cout << endl;
                visualizza_info_codice(biblioteca, codice);
                break;
            }

            case 4: {
                string titolo;
                cout << "Inserisci il titolo del libro: ";
                cin >> titolo;
                cout << endl;
                visualizza_info_titolo(biblioteca, titolo);
                break;
            }

        }

        cout << endl;
        menu();
        cout << "Scegli cosa fare: ";
        cin >> scelta;
    }

    return 0;
}