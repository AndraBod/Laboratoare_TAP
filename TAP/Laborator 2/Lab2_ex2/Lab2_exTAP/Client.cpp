#include "ContBancar.h"
#include "Client.h"
Client::Client(string nume, string prenume, string adresa, unsigned nrConturi, ContBancar* conturi) :
	nume(nume), prenume(prenume), adresa(adresa), nrConturi(nrConturi), conturi(conturi){}
Client::Client(const Client& client) : nume(client.nume), prenume(client.prenume), adresa(client.adresa),
nrConturi(client.nrConturi),conturi(client.conturi)
{
	for (int i = 0; i < nrConturi; i++) {
		this->conturi[i] = client.conturi[i];
	}
}
Client::Client() {}
Client::~Client() {
	this->nume = "";
	this->prenume = "";
	this->adresa = "";
	this->nrConturi = NULL;
	delete[] this->conturi;
}
void Client::setNume(string nume) {
	this->nume = nume;
}
void Client::setPrenume(string prenume) {
	this->prenume = prenume;
}
void Client::setAdresa(string adresa) {
	this->adresa = adresa;
}
void Client::setNrConturi(unsigned nrConturi) {
	this->nrConturi = nrConturi;
}
string Client::getNume() {
	return this->nume;
}
string Client::getPrenume() {
	return this->prenume;
}
string Client::getAdresa() {
	return this->adresa;
}
unsigned Client::getNrConturi() {
	return this->nrConturi;
}
void Client::afisareDateClient() {
	for (int i = 0; i < nrConturi; i++) {
		conturi[i].afisareDateCont();
	}
}
void Client::setCont(ContBancar* conturi)
{
	this->conturi = conturi;
}
