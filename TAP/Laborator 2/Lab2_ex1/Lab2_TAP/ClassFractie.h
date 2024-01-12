#pragma once
#ifndef FRACTIE_H
#define FRACTIE_H
#include <iostream>

using namespace std;
class Fractie {
private:
	int numaratorul;
	int numitorul;

public:
	Fractie();
	Fractie(int numaratorul);
	Fractie(int numaratorul, int numitorul);
	Fractie(const Fractie& fractie);
	~Fractie();
	int getNumarator();
	int getNumitor();
	void adunare(Fractie f1, Fractie f2);
	void scadere(Fractie f1, Fractie f2);
	void inmultire(Fractie f1, Fractie f2);
	void impartire(Fractie f1, Fractie f2);
	void simplifica();
	int cmmmc(Fractie f1, Fractie f2);
	static int cmmdc(int f1, int f2) {
		while (f1 != f2) {
			if (f1 > f2) {
				f1 = f1-f2;
			}
			else {
				f2 = f2-f1;
			}
		}
		return f1;
	}
	double reciproc();
	bool egal(const Fractie&);
	void print();
};
#endif

