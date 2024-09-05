#include <iostream>
#include <math.h>

using namespace std;

class Caine {
protected:
	char numele[20], culoare[20];
	float inaltime, greutate;
	int varsta;
public:
    virtual void citiredate();
    virtual void afisaredate();
};
class CaineCuPete : public Caine{
protected:
    int numarpete;
public:
    void citiredate();
    void afisaredate();
};
class CaineFaraPete : public Caine{
protected:

public:
    void citiredate();
    void afisaredate();
};

