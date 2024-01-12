#pragma once
#ifndef CONTBANCAR_H
#define CONTBANCAR_H
#include "Operatiuni.h"
#include <iostream>

using namespace std;

class ContBancar : public Operatiuni {
private:
	string numarCont;
	float suma;
	string moneda;

public:
	ContBancar(string numarCont, float suma, string moneda);
	ContBancar(const ContBancar& obiect);
	ContBancar();
	~ContBancar();
	void setNumarCont(string numarCont);
	void setSuma(float suma);
	void setMoneda(string moneda);
	string getNumarCont();
	float getSuma();
	string getMoneda();
	void transfer(ContBancar& constDest, float suma);
	float getSumaTotala();
	float getDobanda();
	void depunere(float suma);
	void extragere(float suma);
	void afisareDateCont();

};
#endif

