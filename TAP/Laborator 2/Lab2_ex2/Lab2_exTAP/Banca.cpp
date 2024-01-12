#include "Client.h"
#include "Banca.h"

Banca::Banca(string codBanca, unsigned nrClienti, Client* clienti) : codBanca(codBanca), nrClienti(nrClienti),
																	clienti(clienti){}
Banca::Banca(const Banca& banca) : codBanca(banca.codBanca), nrClienti(banca.nrClienti), clienti(banca.clienti)
{
	for (int i = 0; i < nrClienti; ++i) 
	{
		this->clienti[i] = banca.clienti[i];
	}
}
Banca::~Banca() 
{
	this->codBanca = "";
	this->nrClienti = NULL;
	delete[] this->clienti;
}
void Banca::setCodBanca(string codBanca) {
	this->codBanca = codBanca;
}
void Banca::setNrClienti(unsigned nrClienti) {
	this->nrClienti = nrClienti;
}
string Banca::getCodBanca() {
	return this->codBanca;
}
unsigned Banca::getNrClienti() {
	return this->nrClienti;
}
void Banca::afisareDateBanca() {
	for (int i = 0; i < nrClienti; i++) {
		clienti[i].afisareDateClient();
	}
}