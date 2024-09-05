#include "Problema6.h"
int main() {
    int n, ver, nrVoturipermembru, totalvoturi = 0, v[7];
    Zar Z;
    Trib T;
    Z.initializare();
    cin >> n;
    T.seteaza(n);
    srand(time(NULL));
    for (int i = 1; i <= n; i++) {
        cin >> nrVoturipermembru;
        totalvoturi += nrVoturipermembru;
    }
    for (int i = 1; i <= totalvoturi; i++) {
        int vot;
        vot = Z.randomzar();
        Z.frecventa(vot);
        
    }
    Z.salveaza(v);
    T.pastreaza(v);
    //Z.afisfrecv();
    ver = T.runda1();
    if (ver != 7) {
        cout << "Castigatorul este: " << ver;
        return 0;
    }
    cout << "E nevoie de a doua runda de alegeri.";
    T.lideriidinfrunte();
    T.afisarelideri();
    Z.initializare();
    for (int i = 1; i <= totalvoturi; i++) {
        int vot,alegere;
        vot = Z.randomzar();
        alegere = T.impartirevot(vot);
        Z.frecventa(alegere);
    }
    Z.salveaza(v);
    T.pastreaza(v);
    //Z.afisfrecv();
    T.runda2();
    return 0;
}