#include <iostream>
#include <string>
using namespace std;

/*
 * La struttura Auto definisce un'automobile in base a marca, cilindrata, anno di immatricolazione, nome e cognome dell'acquirente
 * Si definisce un impianto a dimensione di 10 elementi
 * L'utente inserisce i dati delle auto e in base a quello che vuole fare, può visualizzare i cognomi degli acquirenti di auto cilindrata superiore a 1500 cc e può visualizzare anche il totale delle auto immatricolate in un anno dato dall'utente
 */

struct Acquirente {
    string nome;
    string cognome;
};

struct Auto {
    string marca;
    int cilindrata;
    int anno_immatricolazione;
    Acquirente acquirente;
};

struct Impianto {
    Auto autosalone[10];
    int n_auto;
};

void menu() {
    cout << "MENU:" << endl << endl;
    cout << "1) Aggiungere un'auto venduta" << endl;
    cout << "2) Mostra cognomi degli acquirenti di auto > 1500 cc" << endl;
    cout << "3) Conta auto immatricolate in un anno" << endl;
    cout << "0) Esci" << endl;
    cout << endl;
}

void stampa_impianto(const Impianto &autosalone) {
    cout << "Attualmente nel vettore ci sono " << autosalone.n_auto << " auto vendute." << endl;
}

int main() {
    int scelta;
    Impianto autosalone;
    autosalone.n_auto = 0;

    menu();
    cout << "Scegli cosa fare: ";
    cin >> scelta;

    while (scelta != 0) {
        switch (scelta) {
            case 1: {
                Auto temp;
                cout << "Inserisci la marca dell'auto: ";
                cin >> temp.marca;
                cout << "Inserisci la cilindrata (in cc): ";
                cin >> temp.cilindrata;
                cout << "Inserisci l'anno di immatricolazione: ";
                cin >> temp.anno_immatricolazione;
                cout << "Inserisci il nome dell'acquirente: ";
                cin >> temp.acquirente.nome;
                cout << "Inserisci il cognome dell'acquirente: ";
                cin >> temp.acquirente.cognome;

                autosalone.autosalone[autosalone.n_auto] = temp;
                autosalone.n_auto++;
                cout << endl;
            }
                break;

            case 2: {
                cout << "Cognomi degli acquirenti di auto con cilindrata > 1500 cc:" << endl;
                for (int i = 0; i < autosalone.n_auto; ++i) {
                    if (autosalone.autosalone[i].cilindrata > 1500)
                        cout << autosalone.autosalone[i].acquirente.cognome << endl;
                }
                cout << endl;
            }
                break;

            case 3: {
                int anno_richiesto;
                int conta = 0;
                cout << "Inserisci l'anno per il conteggio: ";
                cin >> anno_richiesto;

                for (int i = 0; i < autosalone.n_auto; ++i) {
                    if (autosalone.autosalone[i].anno_immatricolazione == anno_richiesto)
                        conta++;
                }
                cout << "Numero totale di auto immatricolate nell'anno " << anno_richiesto << ": " << conta << endl << endl;
            }
                break;
        }

        stampa_impianto(autosalone);
        cout << endl;
        menu();
        cout << "Scegli cosa fare: ";
        cin >> scelta;
    }

    return 0;
}