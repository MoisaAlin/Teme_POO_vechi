#include <stdio.h>
#include <malloc.h>
#include<iostream>
#include<string>

using namespace std;

struct denumire{
    char nume[20], prenume[20];
};
struct adresa{
    char nume_oras[15];
    int cod_oras;
    char strada[25];
    int numar;
};
struct nr_telefon{
    int prefix;
    long int nr_efectiv;
};
struct elev{
    denumire individ;
    adresa detalii;
    nr_telefon informatii;
    char facultate[25];
    int varsta;
    int note[10];
    int media_de_promovare;
    int absente;
};
void citire(elev a[], int &n);
void afisare(elev a[], int n);
