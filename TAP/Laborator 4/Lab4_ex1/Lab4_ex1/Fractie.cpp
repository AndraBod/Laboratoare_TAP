#include "Fractie.h"
#include <iostream>
using namespace std;

Fractie::Fractie(): numa(0), numi(1) {}

Fractie::Fractie(int numa) : numa(numa), numi(1){}

Fractie::Fractie(int numa, int numi) :numi(numi), numa(numa) {}

Fractie::Fractie(const Fractie& f): numi(f.numi), numa(f.numa) {}

Fractie::~Fractie() 
{
	this->numa = 0;
	this->numi = 0;
}

Fractie Fractie::operator+(const Fractie& f1) const 
{
	Fractie rezultat;
	if (this->numi == f1.numi) {
		rezultat.numa = this->numa + f1.numa;
	}
	else {
		rezultat.numa = (this->numa * f1.numi) + (this->numi * f1.numa);
		rezultat.numi = this->numi * f1.numi;
	}
	return rezultat;
}

Fractie Fractie::operator-(const Fractie& f1) const 
{
	Fractie rezultat;
	if (this->numi == f1.numi) {
		rezultat.numa = this->numa - f1.numa;
	}
	else {
		rezultat.numa = (this->numa * f1.numi) - (this->numi * f1.numa);
		rezultat.numi = this->numi * f1.numi;
	}
	return rezultat;
}

Fractie Fractie::operator*(const Fractie& f1) const 
{
	Fractie rezultat;
	rezultat.numa = this->numa * f1.numa;
	rezultat.numi = this->numi * f1.numi;
	return rezultat;
}

Fractie Fractie::operator/(const Fractie& f1) const 
{
	Fractie salv = f1;
	int aux = salv.numi;
	salv.numi = salv.numa;
	salv.numa = aux;
	Fractie rezultat;
	rezultat.numa = this->numa * salv.numa;
	rezultat.numi = this->numi * salv.numi;
	return rezultat;
}

Fractie& Fractie::operator=(const Fractie& o) 
{
	this->numa = o.numa;
	this->numi = o.numi;
	return *this;
}

bool Fractie::operator!=(const Fractie& f) const 
{
	return !(this->numa / this->numi != f.numa / f.numi);
}

bool Fractie::operator<(const Fractie& f) const 
{
	return (this->numa / this->numi < f.numa / f.numi);
}

bool Fractie::operator>(const Fractie& f) const 
{
	return (this->numa / this->numi > f.numa / f.numi);
}

bool Fractie::operator<=(const Fractie& f) const 
{
	return (this->numa / this->numi <= f.numa / f.numi);
}

bool Fractie::operator>=(const Fractie& f) const 
{
	return (this->numa / this->numi >= f.numa / f.numi);
}

bool Fractie::operator==(const Fractie& f) const 
{
	return (this->numa / this->numi == f.numa / f.numi);
}

Fractie& Fractie::operator+=(const Fractie& f) 
{
	if (this->numi == f.numi) {
		this->numa = this->numa + f.numa;
	}
	else {
		this->numa = (this->numa * f.numi) + (this->numi * f.numa);
		this->numi = this->numi * f.numi;
	}
	return *this;
}

Fractie& Fractie::operator-=(const Fractie& f) 
{
	if (this->numi == f.numi) {
		this->numa = this->numa - f.numa;
	}
	else {
		this->numa = (this->numa * f.numi) - (this->numi * f.numa);
		this->numi = this->numi * f.numi;
	}
	return *this;
}

Fractie& Fractie::operator*=(const Fractie& f) 
{
	this->numa = this->numa * f.numa;
	this->numi = this->numi * f.numi;
	return *this;
}

Fractie& Fractie::operator/=(const Fractie& f) 
{
	Fractie salv = f;
	int aux = salv.numi;
	salv.numi = salv.numa;
	salv.numa = aux;

	this->numa = this->numa * salv.numa;
	this->numi = this->numi * salv.numi;
	return *this;
}

Fractie& Fractie::operator++() 
{
	this->numa += this->numi;
	return *this;
}

Fractie Fractie::operator++(int dummy) 
{
	Fractie old = *this;
	this->numa += this->numi;
	return old;
}

Fractie& Fractie::operator--() 
{
	this->numa -= this->numi;
	return *this;
}

Fractie Fractie::operator--(int dummy) 
{
	Fractie old = *this;
	this->numa -= this->numi;
	return old;
}

ostream& Fractie::operator<<(ostream& o) const 
{
	o << this->numa << " / " << this->numi << endl;
	return o;
}

istream& Fractie::operator>>(istream& i) 
{
	cout << "Introduceți valoarea pentru numerător" << endl;
	i >> this->numa;
	cout << "Introduceți valoarea pentru numitor" << endl;
	i >> this->numi;
	return i;
}

Fractie::operator double() 
{
	return (double)this->numa / this->numi;
}
