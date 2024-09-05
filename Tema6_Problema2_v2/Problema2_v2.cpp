#include "Problema2_v2.h"
Lista::Lista() {
    prim = NULL;
    ultim = NULL;
}

Lista::~Lista() {
    delete prim;
    delete ultim;
}

void Lista::adauga(int x) {
    Nod* nou = new Nod;
    nou->info = x;
    nou->urm = NULL;
    if (prim == NULL)
        prim = nou;
    else
        ultim->urm = nou;
    ultim = nou;
}

void Lista::afis() {
    Nod* p = prim;
    while (p) {
        cout << p->info << " ";
        p = p->urm;
    }
}

void Lista::stergere(int x) {
    Nod* p, * q;
    p = prim;
    while (p->urm != NULL && p->urm->info != x)
        p = p->urm;
    if (p->urm == NULL)
        cout << "Nu s-a gasit valoarea cautata";
    else {
        q = p->urm;
        p->urm = q->urm;
        delete q;
    }
}

void Lista::stergereelementmaimicdecat(int x) {
    Nod* p, * q;
    p = prim;
    while (prim->info < x) {
        q = prim;
        prim = prim->urm;
        delete q;
    }
    p = prim;
    while (p->urm)
        if (p->urm->info < x) {
            q = p->urm;
            p->urm = q->urm;
            delete q;
        }
        else
            p = p->urm;
}

float Lista::mediaaritmetica() {
    Nod* p = prim;
    float s = 0;
    int k = 0;
    while (p) {
        s += p->info;
        k++;
        p = p->urm;
    }
    return s / k;
}