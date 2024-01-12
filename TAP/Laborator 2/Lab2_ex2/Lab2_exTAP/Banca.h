#pragma once
#ifndef BANCA_H
#define BANCA_H
#include <iostream>

using namespace std;

class Banca
{
private:
	string codBanca;
	unsigned nrClienti;
	Client* clienti;
public:
	Banca(string codBanca, unsigned nrClienti, Client* clienti);
	Banca(const Banca& obiect);
	~Banca();
	void setCodBanca(string codBanca);
	void setNrClienti(unsigned nrClienti);
	string getCodBanca();
	unsigned getNrClienti();
	void afisareDateBanca();
};
#endif

