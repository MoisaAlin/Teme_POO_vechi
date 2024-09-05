#include <iostream>
#include <math.h>
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
	virtual float perimetrul(){
        return 0;
	}
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
	float perimetrul(){
        return 2*r*3.1415;
	}
};

class CDreptunghi : public CPunct {
protected:
	float lungime, latime;
public:
	void setdreptunghi(float lu, float la);
	float perimetrudreptunghi();
	float ariedreptunghi();
	float perimetrul(){
        return 2*(latime+lungime);
	}
};

class CPatrat : public CPunct {
protected:
	float latura;
public:
	void setlatura(float lat);
	float perimetrupatrat();
	float ariepatrat();
	float perimetrul(){
	    return 4*latura;
	}
};
