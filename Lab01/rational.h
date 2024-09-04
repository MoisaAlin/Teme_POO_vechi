#include <stdio.h>
#include <malloc.h>
//declararea structurii pentru tipul de date
typedef struct rational{
    int p;
    int q;
}nr_rational;

//declararea functiei ce implementeaza operatia de adunare a doua numere rationale
nr_rational adunare(nr_rational q1, nr_rational q2);

//declararea functiei ce implementeaza operatia de scadere a doua numere rationale
nr_rational scadere(nr_rational q1, nr_rational q2);

//declararea functiei ce implementeaza operatia de inmultire a doua numere rationale
nr_rational inmultire(nr_rational q1, nr_rational q2);

//declararea functiei ce implementeaza operatia de impartire a doua numere rationale
nr_rational impartire(nr_rational q1, nr_rational q2);
