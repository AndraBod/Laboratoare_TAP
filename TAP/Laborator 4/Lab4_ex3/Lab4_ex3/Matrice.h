#pragma once
#ifndef MATRICE_H
#define MATRICE_H
#include<iostream>
using namespace std;

class Matrice 
{

private:
	int l; // Nr linii
	int c; // Nr coloane
public:
	int** elemente;
	Matrice();
	Matrice(int l, int c);
	Matrice(const Matrice& obiect);
	~Matrice();
	inline int getL() const 
	{
		return this->l;
	}
	inline int getC() const 
	{
		return this->c;
	}
	inline void setL(int n) 
	{
		this->l = l;
	}
	inline void setC(int m) 
	{
		this->c = c;
	}
	int* operator[](int index) const;
	Matrice operator+(const Matrice& matrix);
	Matrice operator-(const Matrice& matrix);
	Matrice operator*(const Matrice& matrix);
	Matrice operator/(const Matrice& matrix);

	Matrice& operator=(const Matrice& matrix);
	Matrice& operator+=(const Matrice& matrix);
	Matrice& operator-=(const Matrice& matrix);
	Matrice& operator*=(const Matrice& matrix);
	Matrice& operator/=(const Matrice& matrix);

	bool operator==(const Matrice& matrix) const;
	bool operator<(const Matrice& matrix) const;
	bool operator<=(const Matrice& matrix) const;
	bool operator>(const Matrice& matrix) const;
	bool operator>=(const Matrice& matrix) const;
	bool operator!=(const Matrice& matrix) const;

	Matrice& operator++();
	Matrice& operator--();
	Matrice operator++(int dummy);
	Matrice operator--(int dummy);

	ostream& operator<<(ostream& os) const;
	istream& operator>>(istream& is);

	friend Matrice operator+(const Matrice& mat1, const Matrice& mat2);
	friend Matrice operator-(const Matrice& mat1, const Matrice& mat2);
	friend Matrice operator*(const Matrice& mat1, const Matrice& mat2);
	friend Matrice operator/(const Matrice& mat1, const Matrice& mat2);

	friend bool operator==(const Matrice& mat1, const Matrice& mat2);
	friend bool operator<(const Matrice& mat1, const Matrice& mat2);
	friend bool operator<=(const Matrice& mat1, const Matrice& mat2);
	friend bool operator>(const Matrice& mat1, const Matrice& mat2);
	friend bool operator>=(const Matrice& mat1, const Matrice& mat2);
	friend bool operator!=(const Matrice& mat1, const Matrice& mat2);

	friend ostream& operator<<(ostream& os, const Matrice& matrix);
	friend istream& operator>>(istream& is, const Matrice& matrix);
};

#endif

