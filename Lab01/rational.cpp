#include "rational.h"
// functie recursiva de determinare a cmmdc
int cmmdc(int a, int b){
    if(!b)
        return a;
    return cmmdc(b,a%b);
}

//implementarea operatiei de adunare a doua numere rationale
nr_rational adunare(nr_rational q1,nr_rational q2){
    //declararea variabilei locale rez folosite pentru memorarea rezultatului
    nr_rational rez;
    int c;
    c = cmmdc(q1.q,q2.q);
    q1.p = q1.p * (q2.q/c);
    q2.p = q2.p * (q1.q/c);
    rez.p = q1.p + q2.p;
    if(q1.q)
        rez.q = q1.q * (q2.q/c);
    else
        rez.q = q2.q * (q1.q/c);
    c = cmmdc(rez.p,rez.q);
    rez.p/=c;
    rez.q/=c;
    return rez;
}

//implementarea operatiei de scadere a doua numere rationale
nr_rational scadere(nr_rational q1,nr_rational q2){
    //declararea variabilei locale rez folosite pentru memorarea rezultatului
    nr_rational rez;
    int c;
    c = cmmdc(q1.q,q2.q);
    q1.p = q1.p * (q2.q/c);
    q2.p = q2.p * (q1.q/c);
    rez.p = q1.p - q2.p;
    if(q1.q)
        rez.q = q1.q * (q2.q/c);
    else
        rez.q = q2.q * (q1.q/c);
    c = cmmdc(rez.p,rez.q);
    rez.p/=c;
    rez.q/=c;
    return rez;
}

//implementarea operatiei de inmultire a doua numere rationale
nr_rational inmultire(nr_rational q1,nr_rational q2){
    //declararea variabilei locale rez folosite pentru memorarea rezultatului
    nr_rational rez;
    rez.p = q1.p * q2.p;
    rez.q = q1.q * q2.q;
    int c = cmmdc(rez.p,rez.q);
    rez.p/=c;
    rez.q/=c;
    return rez;
}

//implementarea operatiei de impartire a doua numere rationale
nr_rational impartire(nr_rational q1,nr_rational q2){
    //declararea variabilei locale rez folosite pentru memorarea rezultatului
    nr_rational rez;
    rez.p = q1.p * q2.q;
    rez.q = q1.q * q2.p;
    int c = cmmdc(rez.p,rez.q);
    rez.p/=c;
    rez.q/=c;
    return rez;
}
