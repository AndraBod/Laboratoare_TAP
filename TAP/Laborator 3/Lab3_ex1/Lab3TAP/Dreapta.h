#pragma once
#ifndef DREAPTA_H
#define DREAPTA_H

using namespace std;
class Punct;

class Dreapta{
private:
	int m;
	int n;
public:
	Dreapta();
	Dreapta(int m=1, int n=0);
	Dreapta(const Dreapta&);
	~Dreapta();
	double getM();
	double getN();
	void setM(double m);
	void setN(double n);
	friend class Punct;
	int evaluare(int x, int y);
};
#endif

