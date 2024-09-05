#include "Problema1.h"
int main() {
	CPunct p1, p2;
	CDreapta D;
	CCerc C;
	CDreptunghi DR;
	CPatrat P;
	float d;
	p1.setPunct(10, 20);
	p2.setPunct(30, 40);
	cout << "Distanta dintre puncte este: " << D.distantadintrepuncte(p1, p2) << "\n";
	C.setraza(4);
	cout << "Perimetrul cercului dat este: " << C.perimetrucerc() << "\n";
	cout << "Aria cercului dat este" << C.ariecerc() << "\n";
	DR.setdreptunghi(4, 5);
	cout << "Perimetrul dreptunghiului dat este: " << DR.perimetrudreptunghi() << "\n";
	cout << "Aria dreptunghiului dat este: " << DR.ariedreptunghi() << "\n";
	P.setlatura(10);
	cout << "Perimetrul patratului dat este: " << P.perimetrupatrat() << "\n";
	cout << "Aria patratului dat este: " << P.ariepatrat() << "\n";
}