#include "Complexe.h"
// functie recursiva de determinare a cmmdc
int cmmdc(int a, int b) {
	if (!b) return a;
	return cmmdc(b, a % b);
}
//implementarea operatiei de adunare a doua numere rationale
nr_rational adunare(nr_rational q1, nr_rational q2) {
	//declararea variabilei locale rez folosite pentru memorarea rezultatului
	nr_rational rez;
	int c;
	c = cmmdc(q1.q, q2.q);
	q1.p = q1.p * (q2.q / c);
	q2.p = q2.p * (q1.q / c);
	rez.p = q1.p + q2.p;
	if (q1.q)
		rez.q = q1.q * (q2.q / c);
	else
		rez.q = q2.q * (q1.q / c);
	return rez;
}

//implementarea operatiei de scadere a doua numere rationale
nr_rational scadere(nr_rational q1, nr_rational q2) {
	//declararea variabilei locale rez folosite pentru memorarea rezultatului
	nr_rational rez;
	int c;
	c = cmmdc(q1.q, q2.q);
	q1.p = q1.p * (q2.q / c);
	q2.p = q2.p * (q1.q / c);
	rez.p = q1.p - q2.p;
	if (q1.q)
		rez.q = q1.q * (q2.q / c);
	else
		rez.q = q2.q * (q1.q / c);
	return rez;
}

//implementarea operatiei de inmultire a doua numere rationale
nr_rational inmultire(nr_rational q1, nr_rational q2) {
	//declararea variabilei locale rez folosite pentru memorarea rezultatului
	nr_rational rez;
	rez.p = q1.p * q2.p;

	rez.q = q1.q * q2.q;
	return rez;
}

//implementarea operatiei de impartire a doua numere rationale
nr_rational impartire(nr_rational q1, nr_rational q2) {
	//declararea variabilei locale rez folosite pentru memorarea rezultatului
	nr_rational rez;
	rez.p = q1.p * q2.q;
	rez.q = q1.q * q2.p;
	return rez;
}

//implementarea operatiei adunare a doua numere complexe
nr_complex adunare_comp(nr_complex c1, nr_complex c2) {
	nr_complex rez;
	rez.x = c1.x + c2.x;
	rez.y = c1.y + c2.y;
	return rez;
}

//implementarea operatiei scadere a doua numere complexe

nr_complex scadere_comp(nr_complex c1, nr_complex c2) {
	nr_complex rez;
	rez.x = c1.x - c2.x;
	rez.y = c1.y - c2.y;
	return rez;
}

//implementarea operatiei inmultire a doua numere complexe
nr_complex inmultire_comp(nr_complex c1, nr_complex c2) {
	nr_complex rez;
	rez.x = c1.x * c2.x - c1.y * c2.y;
	rez.y = c1.y * c2.x + c1.x * c2.y;
	return rez;
}

//implementarea operatiei impartire a doua numere complexe
nr_complex impartire_comp(nr_complex c1, nr_complex c2) {
	nr_complex rez;
	rez.x = (c1.x * c2.x + c1.y * c2.y) / (c2.x * c2.x + c2.y * c2.y);
	rez.y = (c2.x * c1.y - c1.x * c2.y) / (c2.x * c2.x + c2.y * c2.y);
	return rez;
}