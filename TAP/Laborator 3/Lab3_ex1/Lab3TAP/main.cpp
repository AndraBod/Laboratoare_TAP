#include "Dreapta.h"
#include "Punct.h"
#include<iostream>

using namespace std;

Punct centruGreutate(Punct** puncte, int n) {

	double sumX = 0;
	double sumY = 0;
	double medieX = 0;
	double medieY = 0;
	for (int i = 0; i < n; ++i)
	{
		sumX += puncte[i]->getX();
		sumY += puncte[i]->getY();
	}
	medieX = sumX / n;
	medieY = sumY / n;
	Punct returnat(medieX, medieY);
	return returnat;
}

int main() 
{
	int n;
	double x;
	double y;
	cout << "Introduceti numarul de puncte : ";
	cin >> n;
	Punct** puncte = new Punct * [n];
	for (int i = 0; i < n; i++) {
		cout << endl << "Punctul numarul " << i << endl;
		cout << "Introduceti x : ";
		cin >> x;
		cout << "Introduceti y : ";
		cin >> y;
		puncte[i] = new Punct(x, y);
	}
	cout << "Numarul de puncte creeate este : " << Punct::getInstance();
	Punct returnat = centruGreutate(puncte, n);
	returnat.afisare();
	for (int i = 0; i < n; i++) {
		delete puncte[i];
	}
	delete[] puncte;
	return 0;
}

