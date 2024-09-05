#include <iostream>
#include <math.h>
#define maxim 101

using namespace std;

template <class T, int n>
class Matrice{
protected:
    T matrice1[maxim][maxim];
    T matrice2[maxim][maxim];
    T matricec[maxim][maxim];
    T matrice3[maxim][maxim];
    T valoare;
    int maximactual1,maximactual2;
    int maximcurent;
public:
    void Matrice1(int, int);
    void Matrice2(int, int);
    void Seteaza(int);
    void Copiaza(int);
    void Adunare();
    void Inmultirecuscalar1(int);
    void Inmultirecuscalar2(int);
    void Inmultireintrematrici();
    void Ridicarelaputere(int);
    void Afisare();
};
