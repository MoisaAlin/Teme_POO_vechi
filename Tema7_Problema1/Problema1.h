#include <iostream>
using namespace std;

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
	Complex();
	Complex(int);
	Complex(int, int);
	Complex(const Complex& z);
	~Complex();

	Complex& operator=(const Complex&);
	friend Complex operator+(const Complex&, const Complex&);
	friend Complex operator+(const Complex&, const int&);
	friend Complex operator+(const int&, const Complex&);
	friend Complex operator*(const Complex&, const Complex&);
	friend Complex operator^(const Complex&, int);
	friend double operator~(const Complex&);
	friend Complex operator/(const Complex&, const Complex&);

	Complex operator++();
	Complex operator++(int);

	//void afisare();
	friend ostream& operator<<(ostream&, const Complex&);
	friend istream& operator>>(istream&, Complex&);

private:
	int* m_real;
	int* m_img;
};

#endif

