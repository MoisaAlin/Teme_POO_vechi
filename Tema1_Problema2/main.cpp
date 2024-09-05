#include "Complexe.h"

int main() {
	//secventa de citire a n numere rationale
	//int n; // n numere rationale
	//int i;
	nr_complex n1;
	nr_complex n2;
	nr_complex suma;
	nr_complex diferenta;
	nr_complex produs;
	nr_complex impartitrea;
	n1.x=2;
	n1.y=3;
	n2.x=7;
	n2.y=11;
	suma = adunare_comp(n1, n2);
	printf("Valoarea sumei este : (%f)+(%f)*i\n", suma.x, suma.y);
	diferenta = scadere_comp(n1, n2);
	printf("Valoarea scaderii este : (%f)+(%f)*i\n", diferenta.x, diferenta.y);
	produs = inmultire_comp(n1, n2);
	printf("Valoarea produs este : (%f)+(%f)*i\n", produs.x, produs.y);
	impartitrea = impartire_comp(n1, n2);
	printf("Valoarea impartire n1/n2 este : (%f)+(%f)*i\n", impartitrea.x, impartitrea.y);
	impartitrea = impartire_comp(n2, n1);
	printf("Valoarea impartire n2/n1 este : (%f)+(%f)*i\n", impartitrea.x, impartitrea.y);
	
	return 0;
}