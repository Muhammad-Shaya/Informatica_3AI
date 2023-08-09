#include <iostream>
#include <string>
using namespace std;

/*
 * La struttura Squadra descrive una squadra di calcio identificata con nome, colore della maglia, punteggio corrente e l'allenatore
 * L'allenatore è caratterizzato da nome, cognome e titoli vinti
 * Si definisce un insieme di squadre (max 10)
 * L'utente inserisce i dati delle squadre e attraverso il menu fa cio che vuole fare
 */

struct Allenatore {
    string nome;
    string cognome;
    int titoli_vinti;
};

struct Squadra {
    string nome;
    string colore_maglia;
    int punteggio_corrente;
    Allenatore allenatore;
};

struct Fantacalcio {
    Squadra squadre[10];
    int n_squadre;
};

void menu() {
    cout << "MENU:" << endl << endl;
    cout << "1) Aggiungere una squadra" << endl;
    cout << "2) Visualizzare cognomi allenatori con più di 30 punti" << endl;
    cout << "3) Contare allenatori con almeno un titolo vinto" << endl;
    cout << "0) Esci" << endl;
    cout << endl;
}

void stampa_situazione(const Fantacalcio &tabella) {
    cout << "Attualmente nel vettore ci sono " << tabella.n_squadre << " squadre." << endl;
}

int main() {
    Fantacalcio tabella;
    tabella.n_squadre = 0;

    int scelta;
    menu();
    cout << "Scegli cosa fare: ";
    cin >> scelta;

    while (scelta != 0) {
        switch (scelta) {
            case 1: {
                if (tabella.n_squadre < 10) {
                    Squadra nuovaSquadra;
                    cout << "Inserisci il nome della squadra: ";
                    cin >> nuovaSquadra.nome;
                    cout << "Inserisci il colore della maglia: ";
                    cin >> nuovaSquadra.colore_maglia;
                    cout << "Inserisci il punteggio corrente: ";
                    cin >> nuovaSquadra.punteggio_corrente;
                    cout << "Inserisci il nome dell'allenatore: ";
                    cin >> nuovaSquadra.allenatore.nome;
                    cout << "Inserisci il cognome dell'allenatore: ";
                    cin >> nuovaSquadra.allenatore.cognome;
                    cout << "Inserisci il numero di titoli vinti dall'allenatore: ";
                    cin >> nuovaSquadra.allenatore.titoli_vinti;

                    tabella.squadre[tabella.n_squadre] = nuovaSquadra;
                    tabella.n_squadre++;
                } else {
                    cout << "Numero massimo di squadre raggiunto." << endl;
                }
            }
                break;

            case 2: {
                cout << "Cognomi degli allenatori con più di 30 punti: " << endl;
                for (int i = 0; i < tabella.n_squadre; ++i) {
                    if (tabella.squadre[i].punteggio_corrente > 30)
                        cout << tabella.squadre[i].allenatore.cognome << endl;
                }
            }
                break;

            case 3: {
                int conta = 0;
                for (int i = 0; i < tabella.n_squadre; ++i) {
                    if (tabella.squadre[i].allenatore.titoli_vinti > 0)
                        conta++;
                }
                cout << "Numero totale di allenatori con almeno un titolo: " << conta << endl;
            }
                break;
        }

        cout << endl;
        stampa_situazione(tabella);
        cout << endl;
        menu();
        cout << "Scegli cosa fare: ";
        cin >> scelta;
    }

    return 0;
}