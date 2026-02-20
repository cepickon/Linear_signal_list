#include <iostream>
#include "LssPrvek.h"
#include "Lss.h"

int main(){
	Lss seznam;
	seznam.pridejNazacatek(5);
	seznam.pridejNazacatek(3);
	seznam.pridejNazacatek(2);
	seznam.pridejNazacatek(8);
	seznam.pridejNazacatek(1);

	seznam.vypis();
	seznam.vypisS();
	seznam.vypisL();
	seznam.soucet();
	
	seznam.zrusNaZacatku();
	seznam.vypis();
}
