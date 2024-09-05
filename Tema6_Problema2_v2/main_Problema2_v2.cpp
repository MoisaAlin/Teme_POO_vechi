#include "Problema2_v2.h"

int main() {
    int x, v, i;
    Lista l;
    do {
        cout << "\n1.Adauga un nod";
        cout << "\n2.Sterge un nod";
        cout << "\n3.Elimina elementele din lista cu o valuare mai mica";
        cout << "\n4.Media aritmetica a valorii elementelor din lista";
        cout << "\n5.Afisare lista";
        cout << "\n6.Iesire din meniu";
        cout << "\n\nOptiunea dumneavoastra: ";
        cin >> i;
        switch (i) {
        case 1:
            cout << "\nValoarea nodului este:";
            cin >> x;
            l.adauga(x);
            break;
        case 2:
            cout << "\nValoarea nodului este:";
            cin >> x;
            l.stergere(x);
            break;
        case 3:
            cout << "\nElementele eliminate sunt mai mici decat:";
            cin >> x;
            l.stergereelementmaimicdecat(x);
            break;
        case 4:
            cout << "\nMedia aritmetica a numerelor este:";
            cout << l.mediaaritmetica();
            cout << "\n";
            break;
        case 5:
            cout << "\nLista de numere intregi:";
            l.afis();
            cout << "\n";
            break;
        }
    } while (i < 6);
    return 0;
}