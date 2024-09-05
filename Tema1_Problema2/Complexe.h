#include <stdio.h>
#include <malloc.h>
//declararea structurii pentru tipul de date
typedef struct rational {
	int p;
	int q;
}nr_rational;
typedef struct complex {
	float x;
	float y;
}nr_complex;
//declararea functiei ce implementeaza operatia de adunare a doua numere rationale
nr_rational adunare(nr_rational q1, nr_rational q2);
//declararea functiei ce implementeaza operatia de scadere a doua numere rationale
nr_rational scadere(nr_rational q1, nr_rational q2);
//declararea functiei ce implementeaza operatia de inmultire a doua numere rationale
nr_rational inmultire(nr_rational q1, nr_rational q2);
//declararea functiei ce implementeaza operatia de impartire a doua numere rationale
nr_rational impartire(nr_rational q1, nr_rational q2);
//declararea functiei ce implementeaza operatia de adunare a doua numere complexe
nr_complex adunare_comp(nr_complex c1, nr_complex c2);
//declararea functiei ce implementeaza operatia de scadere a doua numere complexe
nr_complex scadere_comp(nr_complex c1, nr_complex c2);
//declararea functiei ce implementeaza operatia de inmultire a doua numere complexe
nr_complex inmultire_comp(nr_complex c1, nr_complex c2);
//declararea functiei ce implementeaza operatia de impartire a doua numere complexe
nr_complex impartire_comp(nr_complex c1, nr_complex c2);