#pragma once
#include "LssPrvek.h"

class Lss{
public:
	Lss();
	~Lss();
	void pridejNazacatek(int data);
	void vypis() const;
	void zrusNaZacatku();
	void vypisS() const;
	void vypisL() const;
	void soucet() const;
private:
	LssPrvek* mPrvni;
};
