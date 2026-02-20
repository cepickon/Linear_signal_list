#include "Lss.h"
#include <iostream>

Lss::Lss()
	: mPrvni(nullptr)
{}

Lss::~Lss(){}

void Lss::pridejNazacatek(int data){
	LssPrvek* novyPrvek = new LssPrvek();
	novyPrvek->mHodnota = data;
	novyPrvek->mDalsi = mPrvni;
	mPrvni = novyPrvek;
}

void Lss::vypis() const{
	LssPrvek* aktualni = mPrvni;
	while (aktualni != nullptr) {
		std::cout << aktualni->mHodnota << " ";
		aktualni = aktualni->mDalsi;
	}
	std::cout << std::endl;
}

void Lss::vypisS() const{
	LssPrvek* aktualni = mPrvni;
	while (aktualni != nullptr) {
		if (aktualni->mHodnota % 2 == 0) {
			std::cout << aktualni->mHodnota << " ";
		}
		aktualni = aktualni->mDalsi;
	}
	std::cout << std::endl;
}

void Lss::vypisL() const{
	LssPrvek* aktualni = mPrvni;
	while (aktualni != nullptr) {
		if (aktualni->mHodnota % 2 != 0) {
			std::cout << aktualni->mHodnota << " ";
		}
		aktualni = aktualni->mDalsi;
	}
	std::cout << std::endl;
}

void Lss::soucet() const {
	LssPrvek* aktualni = mPrvni;
	int soucet = 0;
	while (aktualni != nullptr) {
		soucet += aktualni->mHodnota;
		aktualni = aktualni->mDalsi;
	}
	std::cout << "Soucet: " << soucet;
	std::cout << std::endl;
}

void Lss::zrusNaZacatku(){
	LssPrvek* novyPrvek = new LssPrvek();
	if (mPrvni == nullptr) {
		return;
	}
	LssPrvek* odstraneny = mPrvni;
	mPrvni = mPrvni->mDalsi;
	delete odstraneny;
}
