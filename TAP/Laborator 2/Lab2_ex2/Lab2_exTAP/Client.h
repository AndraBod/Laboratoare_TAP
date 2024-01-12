#pragma once
#include "ContBancar.h"
#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>

using namespace std;

class Client {
private:
	string nume;
	string prenume;
	string adresa;
	unsigned nrConturi;
	ContBancar* conturi;
public:
	Client(string nume, string prenume, string adresa, unsigned nrConturi, ContBancar* conturi);
	Client();
	Client(const Client& obiect);
	~Client();
	void setNume(string nume);
	void setPrenume(string prenume);
	void setAdresa(string adresa);
	void setNrConturi(unsigned nrConturi);
	void setCont(ContBancar*);
	string getNume();
	string getPrenume();
	string getAdresa();
	unsigned getNrConturi();
	void afisareDateClient();
};
#endif

