#include<iostream>
using namespace std;

class Lista{
    class Nod{
    public:
        int info;
        Nod* urm;
    };
    Nod *prim, *ultim;
public:
    Lista();
    ~Lista();
    void adauga(int  x);
    void afis();
    void stergere(int x);
    void stergereelementmaimicdecat(int x);
    float mediaaritmetica();
};