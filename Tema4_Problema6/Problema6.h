#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Zar {
	int fata;
	int f[7];
public:
	int randomzar();
	void initializare();
	int frecventa(int x);
	void salveaza(int a[7]);
	void afiseaza();
	void afisfrecv();
};

class Trib {
	int nroamenitrib;
	int candidati[7];
	int ceidoilideri[3];
public:
	void seteaza(int x);
	void pastreaza(int a[7]);
	int runda1();
	void lideriidinfrunte();
	void afisarelideri();
	int impartirevot(int x);
	void runda2();
	/*
	Zaruri 
public:
	int nroamenitrib;
	int ceidoilideri[3];
	void seteaza(int x);
	void lideriidinfrunte();
	int castigator1();
	void afisarelideri();
	int impartirevot(int x);
	void castigator2();
	*/
};