#include "Problema3.h"
int main() {
	Caine Ca;
	int n;
	cout<<"Cainele are pete?\nTastati 1 daca are si 0 daca nu are.\n";
	cin>>n;
	if(n==1){
        CaineCuPete CP;
        CP.citiredate();
        CP.afisaredate();
	}else{
        CaineFaraPete CF;
        CF.citiredate();
        CF.afisaredate();
	}
}
