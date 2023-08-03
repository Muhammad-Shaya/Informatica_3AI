#include <iostream>
#include <string>
using namespace std;

bool palindroma(const string &s) {
    int sinistra = 0, destra = s.size() - 1;

    while (sinistra < destra) {
        if (tolower(s.at(sinistra)) != tolower(s.at(destra)))
            return false;
        sinistra++;
        destra--;
    }

    return true;
}

int main() {
    string s;
    cout << "Inserisci una stringa: ";
    getline(cin, s);

    if (palindroma(s))
        cout << "La stringa è palindroma" << endl;
    else
        cout << "La stringa non è palindroma" << endl;

    return 0;
}