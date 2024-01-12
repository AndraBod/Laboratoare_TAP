#pragma once
#ifndef _FRACTIE_H
#define _FRACTIE_H
#include <iostream>
using namespace std;

class Fractie {
private:
	int numa;
	int numi;

public:
	Fractie();
	Fractie(int numa);
	Fractie(int numa, int numi);
	Fractie(const Fractie&);
	~Fractie();
	inline int getNumitor() const 
	{
		return this->numi;
	}
	inline int getNumarator() const 
	{
		return this->numa;
	}
	inline void setNumitor(int numi) 
	{
		this->numi = numi;
	}
	void setNumarator(int numa) 
	{
		this->numa = numa;
	}
	Fractie operator+(const Fractie& f) const;
	Fractie operator-(const Fractie& f) const;
	Fractie operator*(const Fractie& f) const;
	Fractie operator/(const Fractie& f) const;
	Fractie& operator=(const Fractie& f);

	bool operator!=(const Fractie& f) const;
	bool operator<(const Fractie& f) const;
	bool operator>(const Fractie& f) const;
	bool operator<=(const Fractie& f) const;
	bool operator>=(const Fractie& f) const;
	bool operator==(const Fractie& f) const;

	Fractie& operator+=(const Fractie& f);
	Fractie& operator-=(const Fractie& f);
	Fractie& operator*=(const Fractie& f);
	Fractie& operator/=(const Fractie& f);

	Fractie& operator++();
	Fractie operator++(int dummy);
	Fractie& operator--();
	Fractie operator--(int dummy);

	ostream& operator<<(ostream& o) const;
	istream& operator>>(istream& i);

	operator double();
};
#endif

