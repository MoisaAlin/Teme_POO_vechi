#include "Prob2_ref.h"

void citire(elev a[], int &n){
    int i;
    cout<<"Numarul de elevi din grup e:\n";
    cin>>n;
    cout<<"Date elevi:\n";
    for(i=1;i<=n;i++){
        cout<<"Nume:\n";               cin>>a[i].individ.nume;
        cout<<"Prenume:\n";            cin>>a[i].individ.prenume;
        cout<<"Nume oras:\n";          cin>>a[i].detalii.nume_oras;
        cout<<"Cod oras:\n";           cin>>a[i].detalii.cod_oras;
        cout<<"Strada:\n";             cin>>a[i].detalii.strada;
        cout<<"Numar:\n";              cin>>a[i].detalii.numar;
        cout<<"Prefix:\n";             cin>>a[i].informatii.prefix;
        cout<<"Numar efectiv:\n";      cin>>a[i].informatii.nr_efectiv;
        cout<<"Facultate:\n";          cin>>a[i].facultate;
        cout<<"Varsta:\n";             cin>>a[i].varsta;
        cout<<"Note:\n";
        for(int j=1;j<=10;j++){
            cin>>a[i].note[j];
        }
        cout<<"Media de promovare:\n"; cin>>a[i].media_de_promovare;
        cout<<"Numar de absente:\n";   cin>>a[i].absente;
    }
}
void afisare(elev a[], int n){
    int i;
    for(i=1;i<=n;i++){
        cout<<"Elevul cu numarul:"<<i<<"\n";
        cout<<"Nume:"<<a[i].individ.nume<<"\n";
        cout<<"Prenume:"<<a[i].individ.prenume<<"\n";
        cout<<"Nume oras:"<<a[i].detalii.nume_oras<<"\n";
        cout<<"Cod oras:"<<a[i].detalii.cod_oras<<"\n";
        cout<<"Strada:"<<a[i].detalii.strada<<"\n";
        cout<<"Numar:"<<a[i].detalii.numar<<"\n";
        cout<<"Prefix:"<<a[i].informatii.prefix<<"\n";
        cout<<"Numar efectiv:"<<a[i].informatii.nr_efectiv<<"\n";
        cout<<"Facultate:"<<a[i].facultate<<"\n";
        cout<<"Varsta:"<<a[i].varsta<<"\n";
        cout<<"Note:"<<"\n";
        for(int j=1;j<=10;j++){
            cout<<a[i].note[j]<<" ";
        }
        cout<<"\n";
        cout<<"Media de promovare:"<<a[i].media_de_promovare<<"\n";
        cout<<"Numar de absente:"<<a[i].absente<<"\n";
        cout<<"\n";
    }
}
