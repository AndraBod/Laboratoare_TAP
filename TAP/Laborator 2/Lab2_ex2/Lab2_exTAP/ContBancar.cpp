#include "ContBancar.h"
ContBancar::ContBancar(const ContBancar& obiect) {
	this->suma = obiect.suma;
	this->moneda = obiect.moneda;
	this->numarCont = obiect.numarCont;
}
ContBancar::ContBancar() {

}
ContBancar::~ContBancar() {
	this->suma = NULL;
	this->moneda = "";
	this->numarCont = "";
}
void ContBancar::setSuma(float suma) {
	this->suma = suma;
}
void ContBancar::setMoneda(string moneda) {
	this->moneda = moneda;
}
void ContBancar::setNumarCont(string numarCont) {
	this->numarCont = numarCont;
}
float ContBancar::getSuma() {
	return this->suma;
}
string ContBancar::getMoneda() {
	return this->moneda;
}
string ContBancar::getNumarCont() {
	return this->numarCont;
}
void ContBancar::transfer(ContBancar& obiect, float suma) {
	this->suma -= suma;
	obiect.suma += suma;
}
float ContBancar::getDobanda() {
	if (this->moneda == "RON") {
		if (this->suma < 500)
		{
			return (0.3 / 100) * this->suma;
		}
		else if (this->suma > 500) {
			return (0.8 / 100) * this->suma;
		}
	}
	else if (this->moneda == "EUR") {
		return (0.1 / 100) * this->suma;
	}
	else
		return 0;
}
float ContBancar::getSumaTotala() {
	return (this->suma + getDobanda());
}
void ContBancar::depunere(float suma) {
	this->suma += suma;
}
void ContBancar::extragere(float suma) {
	this->suma -= suma;
}
void ContBancar::afisareDateCont() {
	cout << endl << "Datele contului sunt : " << endl << "Suma : " << suma << endl << "Moneda : " << moneda << endl << "Numarul contului : " << numarCont << endl;
}