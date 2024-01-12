#include "Carte.h"
#include <iostream>

using namespace std;

Carte::Carte(string autor, string titlu, unsigned int isbn, unsigned int pret) : autor(autor), titlu(titlu), isbn(isbn), pret(pret) {
	instance++;
}
Carte::Carte(const Carte& carte): autor(carte.autor), titlu(carte.titlu), isbn(carte.isbn), pret(carte.pret)
{
	if (this != &carte) 
	{
		instance++;
	}
}
Carte::~Carte() 
{
	this->autor = "Undefined";
	this->titlu = "Undefined";
	this->isbn = NULL;
	this->pret = NULL;
	instance--;
}
void Carte::print () const
{
	cout << endl << "Titlu : " << this->titlu << endl;
	cout << endl << "Autor : " << this->autor << endl;
	cout << endl << "ISBN : " << this->isbn << endl;
	cout << endl << "Pret : " << this->pret << endl;

}
