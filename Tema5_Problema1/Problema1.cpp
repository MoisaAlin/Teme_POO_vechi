#include "Problema1.h"

void CPunct::setPunct(float x0, float y0) {
	x = x0;
	y = y0;
}

float CPunct::X() {
	return x;
}

float CPunct::Y() {
	return y;
}

float CDreapta::distantadintrepuncte(CPunct p1, CPunct p2) {
	float d = sqrt((p1.X() - p2.X()) * (p1.X() - p2.X()) + (p1.Y() - p2.Y()) * (p1.Y() - p2.Y()));
	return d;
}

void CCerc::setraza(float raza) {
	r = raza;
}

float CCerc::perimetrucerc() {
	float p = 2 * r * 3.1415;
	return p;
}

float CCerc::ariecerc() {
	float ar = r * r * 3.1415;
	return ar;
}

void CDreptunghi::setdreptunghi(float lu, float la) {
	lungime = lu;
	latime = la;
}

float CDreptunghi::perimetrudreptunghi() {
	return latime * 2 + lungime * 2;
}

float CDreptunghi::ariedreptunghi() {
	return latime * lungime;
}

void CPatrat::setlatura(float lat) {
	latura = lat;
}

float CPatrat::perimetrupatrat() {
	return latura * 4;
}

float CPatrat::ariepatrat() {
	return latura*latura;
}