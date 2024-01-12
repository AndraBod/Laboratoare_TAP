#include "ClassFractie.h"
#include <iostream>	

using namespace std;

Fractie::Fractie()  : numaratorul(0), numitorul(1) {}
Fractie::Fractie(int numaratorul) : numaratorul(numaratorul), numitorul(1) {}
Fractie::Fractie(int numaratorul, int numitorul) : numaratorul(numaratorul), numitorul(numitorul) {}
Fractie::Fractie(const Fractie& f1) : numaratorul(f1.numaratorul), numitorul(f1.numitorul) {}
int Fractie::getNumarator() {
	return this->numaratorul;
}
int Fractie::getNumitor() {
	return this->numitorul;
}
Fractie::~Fractie() {
	this->numaratorul = 0;
	this->numitorul = 1;
}
/*int Fractie::cmmmc(Fractie f1, Fractie f2) {
	int p, r;
	p = f1.numitorul * f2.numitorul;
	r = f1.numitorul % f2.numitorul;

	while (r != 0) {
		f1.numitorul = f2.numitorul;
		f2.numitorul = r;
		r = f1.numitorul % f2.numitorul;
	}
	return p / f2.numitorul;
}*/

void Fractie::adunare(Fractie f1, Fractie f2) {
	int numitor = f1.numitorul * f2.numaratorul + f1.numaratorul * f2.numitorul;
	int numarator = f1.numitorul * f2.numitorul;
	cout << "\n" << numarator << "/" << numitor;
}
void Fractie::scadere(Fractie f1, Fractie f2) {
	int numitor = f1.numitorul * f2.numaratorul - f1.numaratorul * f2.numitorul;
	int numarator = f1.numitorul * f2.numitorul;
	cout << "\n" << numarator << "/" << numitor;
}
void Fractie::inmultire(Fractie f1, Fractie f2) {
	int numitor = f1.numaratorul * f2.numaratorul;
	int numarator = f1.numitorul * f2.numitorul;
	cout << "\n" << numitor << "/" << numarator;
}
void Fractie::impartire(Fractie f1, Fractie f2) {
	int temp = f2.numitorul;
	f2.numitorul = f2.numaratorul;
	f2.numaratorul = temp;
	inmultire(f1, f2);
	cout << "\n";
}
void Fractie::simplifica() {
	int tmp1 = this->numaratorul;
	int tmp2 = this->numitorul;
	while (tmp1 != tmp2)
	{
		if (tmp1 > tmp2)
		{
			tmp1 = tmp1 - tmp2;
		}
		else
		{
			tmp2 = tmp2 - tmp1;
		}
		this->numaratorul = tmp1;
		this->numitorul = tmp2;
		cout << "\n" << this->numitorul << "/" << this->numaratorul;
	}
}
double Fractie::reciproc() {
	int temp = this->numaratorul;
	this->numaratorul = this->numitorul;
	this->numitorul = temp;

	cout << endl << "Inversul fractiei este : " << this->numaratorul << "/" << this->numitorul << endl;
	return ((double)this->numaratorul / this->numitorul);
}
bool Fractie::egal(const Fractie& f) {
	if (this->numaratorul == f.numaratorul && this->numitorul == f.numitorul) {
		return true;
	}
	else
		return false;
}
void Fractie::print() {
	cout << endl << this->numaratorul << "/" << this->numitorul << endl;
}
