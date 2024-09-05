#include "Problema1.h"

int Zaruri::randomzar() {
	fata = rand() % 6 + 1;
	return fata;
}
void Zaruri::initializare() {
	for (int i = 1; i <= 6; i++) {
		f[i] = 0;
	}
}
int Zaruri::frecventa(int x) {
	f[x] = f[x] + 1;
	return f[x];
}
void Zaruri::afiseaza() {
	cout << fata <<" ";
}
void Zaruri::afisfrecv() {
	for (int i = 1; i <= 6; i++) {
		cout << "Fata " << i << " apare de " << f[i] << " ori\n";
	}
}