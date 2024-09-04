#include "rational.h"

int main(){
    //secventa de citire a n numere rationale
    int n; // n numere rationale
    int i;
    nr_rational *q; //tablou de numere rationale
    nr_rational suma;
    nr_rational produs;
    nr_rational expresie;
    printf("Numarul de numere rationale\n");
    scanf("%d",&n);
    //alocarea memoriei pentru n numere rationale
    q = (nr_rational*)malloc(n*sizeof(nr_rational));
    for(i = 0; i < n;i++){
        printf("numarul rational %d\n",i+1);
        scanf("%d",&q[i].p);
        scanf("%d",&q[i].q);
    }
    //secventa de instructiuni pentru calculul expresiei
    suma.p = q[0].p;
    suma.q = q[0].q;
    i = 1;
    while(i < n){
        suma = adunare(suma,q[i]);
        //printf("%d/%d\n",suma.p,suma.q);
        i = i + 1;
    }
    produs.p = 1;
    produs.q = 1;
    i = 0;
    while(i < n){
        produs = inmultire(produs,q[i]);
        //printf("%d/%d\n",produs.p,produs.q);
        i = i + 1;
    }
    expresie = impartire(suma,produs);
    printf("Valoarea sumei este : %d/%d\n",suma.p,suma.q);
    printf("Valoarea produs este : %d/%d\n",produs.p,produs.q);
    printf("Valoarea expresiei este : %d/%d",expresie.p,expresie.q);
    return 0;
}
