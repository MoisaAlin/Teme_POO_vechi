#include "Problema6.h"

int Zar::randomzar() {
	fata = rand() % 6 + 1;
	return fata;
}
void Zar::initializare() {
	for (int i = 1; i <= 6; i++) {
		f[i] = 0;
	}
}
int Zar::frecventa(int x) {
	f[x] = f[x] + 1;
	return f[x];
}
void Zar::afiseaza() {
	cout << fata << " ";
}
void Zar::afisfrecv() {
	for (int i = 1; i <= 6; i++) {
		cout << "Fata " << i << " apare de " << f[i] << " ori\n";
	}
}
void Zar::salveaza(int a[]) {
	for (int i = 1; i <= 6; i++)
		a[i] = f[i];
}
void Trib::pastreaza(int a[]) {
	for (int i = 1; i <= 6; i++)
		candidati[i] = a[i];
}
void Trib::seteaza(int x) {
	nroamenitrib = x;
}
int Trib::runda1() {
	for (int i = 1; i <= 6; i++) {
		if (candidati[i] > nroamenitrib / 2 + 1) {
			return i;
		}
	}
	return 7;
}
void Trib::lideriidinfrunte() {
	int maxim = candidati[1], maxim2 = 0;
	ceidoilideri[1] = 1;
	for (int i = 2; i <= 6; i++) {
		if (candidati[i]<=maxim && candidati[i]>maxim2) {
			ceidoilideri[2] = i;
			maxim2 = candidati[i];
		}
		else {
			if (candidati[i] > maxim) {
				ceidoilideri[2] = ceidoilideri[1];
				ceidoilideri[1] = i;
				maxim2 = maxim;
				maxim = candidati[i];

			}
		}
	}
}
void Trib::afisarelideri() {
	cout << "Candidatii sunt:" << ceidoilideri[1] << " si " << ceidoilideri[2] << "\n";
}
int Trib::impartirevot(int x) {
	if (x <= 3) {
		return ceidoilideri[1];
	}
	else {
		return ceidoilideri[2];
	}
}
void Trib::runda2() {
	if (candidati[ceidoilideri[1]] > candidati[ceidoilideri[2]]) {
		cout << "Castigatorul este: " << ceidoilideri[1];
	}
	else {
		cout << "Castigatorul este: " << ceidoilideri[2];
	}
}