#include <iostream>

using namespace std;

class CPunct {
protected:
	float x, y;
public:
	void setPunct(float x0, float y0);
	CPunct(float x0 = 0, float y0 = 0) {
		setPunct(x0, y0);
	}
	float X();
	float Y();
};

class CDreapta : public CPunct {
protected:
	float x1, x2;
public:

	float distantadintrepuncte(CPunct p1, CPunct p2);
};

class CCerc : public CPunct {
protected:
	float r;
public:
	void setraza(float raza);
	float perimetrucerc();
	float ariecerc();
};

class CDreptunghi : public CPunct {
protected:
	float lungime, latime;
public:
	void setdreptunghi(float lu, float la);
	float perimetrudreptunghi();
	float ariedreptunghi();
};

class CPatrat : public CPunct {
protected:
	float latura;
public:
	void setlatura(float lat);
	float perimetrupatrat();
	float ariepatrat();
};