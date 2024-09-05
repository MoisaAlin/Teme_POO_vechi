#include "Problema1.h"
#include <math.h>

Complex::Complex() {
	this->m_real = new int(0);
	this->m_img = new int(0);
}

Complex::Complex(int r) {
	this->m_real = new int(r);
	this->m_img = new int(0);
}

Complex::Complex(int r, int i) {
	this->m_real = new int(r);
	this->m_img = new int(i);
}

Complex::Complex(const Complex& z) {
	this->m_real = new int(*z.m_real);
	this->m_img = new int(*z.m_img);
}

Complex::~Complex() {
	if (this->m_real != nullptr) {
		delete this->m_real;
	}
	if (this->m_img != nullptr) {
		delete this->m_img;
	}
}

Complex& Complex::operator=(const Complex& z) {
	if (this != &z) {
		delete this->m_real;
		delete this->m_img;

		this->m_real = new int(*z.m_real);
		this->m_img = new int(*z.m_img);
	}
	return *this;
}

Complex operator+(const Complex& z1, const Complex& z2) {
	Complex rez(0, 0);
	*rez.m_real = *z1.m_real + *z2.m_real;
	*rez.m_img = *z1.m_img + *z2.m_img;
	return rez;
}

Complex operator+(const int& r, const Complex& z1) {
	Complex rez(0, 0);
	*rez.m_real = *z1.m_real + r;
	*rez.m_img = *z1.m_img + r;
	return rez;
}

Complex operator+(const Complex& z1, const int& r) {
	Complex rez(0, 0);
	*rez.m_real = *z1.m_real + r;
	*rez.m_img = *z1.m_img + r;
	return rez;
}

Complex operator*(const Complex& z1, const Complex& z2) {
	Complex rez(0, 0);
	*rez.m_real = (*z1.m_real) * (*z2.m_real) - (*z1.m_img) * (*z2.m_img);
	*rez.m_img = (*z1.m_real) * (*z2.m_img) + (*z1.m_img) * (*z2.m_real);
	return rez;
}

Complex operator^(const Complex& z1, int r) {
	Complex rez(0, 0);
	if (r == 0) {
		return rez;
	}
	*rez.m_real = *z1.m_real;
	*rez.m_img = *z1.m_img;
	r = r - 1;
	while (r != 0) {
		*rez.m_real = (*z1.m_real) * (*z1.m_real) - (*z1.m_img) * (*z1.m_img);
		*rez.m_img = (*z1.m_real) * (*z1.m_img) * 2;
		r--;
	}
	return rez;
}

double operator~(const Complex& z1) {
	double r;
	r = sqrt((*z1.m_real) * (*z1.m_real) + (*z1.m_img) * (*z1.m_img));
	return r;
}

Complex operator/(const Complex& z1, const Complex& z2) {
	Complex rez(0, 0);
	if (z2.m_real == 0 && z2.m_img == 0) {
		cout << "Nu se poate efectua impartirea!\n";
		return rez;
	}
	*rez.m_real = ((*z1.m_real) * (*z1.m_real) + (*z1.m_img) * (*z1.m_img)) / ((*z2.m_real) * (*z2.m_real) + (*z2.m_img) * (*z2.m_img));
	*rez.m_img = ((*z1.m_img) * (*z2.m_real) - (*z1.m_real) * (*z2.m_img)) / ((*z2.m_real) * (*z2.m_real) + (*z2.m_img) * (*z2.m_img));
	return rez;
}

Complex Complex::operator++() {
	++(*this->m_real); // <=>  this->m_real = this->m_real + 1;
	++(*this->m_img); // <=>  this->m_img = this->m_img + 1;
	return *this;
}

Complex Complex::operator++(int) {
	Complex temp(*this);
	(*this->m_real)++; // <=>  this->m_real = this->m_real + 1;
	(*this->m_img)++;
	return temp;
}

ostream& operator<<(ostream& os, const Complex& z) {
	os << *z.m_real << " + i * " << *z.m_img << endl;
	return os;
}

istream& operator>>(istream& is, Complex& z) {
	is >> *z.m_real;
	is >> *z.m_img;
	return is;
}
