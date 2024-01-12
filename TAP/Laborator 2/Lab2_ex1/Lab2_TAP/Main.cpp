#include "ClassFractie.h"
#include <iostream>
using namespace std;

int main() {
	int numitor;
	int numarator;
	cout << endl << "Introduceti numaratorul primei fractii : ";
	cin >> numarator;
	cout << endl << "Introduceti numitorul primei fractii : ";
	cin >> numitor;
	Fractie f1(numarator, numitor);
	cout << endl << "Introduceti numaratorul celei de a doua fractii : ";
	cin >> numarator;
	cout << endl << "Introduceti numitorul celei de a doua fractii : ";
	cin >> numitor;
	Fractie f2(numarator, numitor);
	if (f2.egal(f1) == 0)
	{
		cout << "Fractia f1 si f2 nu sunt egale.";
	}
	else if(f2.egal(f2) == 1)
	{
		cout << "Fractia f1 si f2 sunt egale.";
	}
	Fractie rez;
	cout << endl << "Adunarea fractiei f1 cu fractia f2 : ";
	rez.adunare(f1, f2);
	cout << endl << "Scaderea fractiei f1 cu fractia f2 : ";
	rez.scadere(f1, f2);
	cout << endl << "Inmultirea fractiei f1 cu fractia f2 : ";
	rez.impartire(f1, f2);
	cout << endl << "Impartirea fractiei f1 cu fractia f2 : ";
	rez.impartire(f1, f2);
	Fractie a(45,5);
	a.simplifica();
	cout << "Avem fractia ";
	a.print();
	cout << " dupa simplificare: " << a.reciproc() << endl;

	int nr1;
	int nr2;
	cout << endl << "Introduceti primul numar : ";
	cin >> nr1;
	cout << endl << "Introduceti al doilea numar : ";
	cin >> nr2;
	cout << endl << "Cmmdc dintre cele doua numere introduse este : " << Fractie::cmmdc(nr1, nr2) << endl;

}