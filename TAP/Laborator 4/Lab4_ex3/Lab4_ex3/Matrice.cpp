#include "Matrice.h"
#include <iostream>

using namespace std;

Matrice::Matrice(): l(0),c(0) {}

Matrice::Matrice(int l, int c) : l(l), c(c) 
{
	this->elemente = new int* [l];
	for (int i = 0; i < l; ++i) {
		this->elemente[i] = new int[c];
	}
}

Matrice::Matrice(const Matrice& obiect): l(obiect.l), c(obiect.c)
{
	this->elemente = obiect.elemente;
}

Matrice::~Matrice() 
{
	this->l = NULL;
	this->c = NULL;
	for (int i = 0; i < this->l; ++i) {
		delete[] this->elemente[i];
	}
	delete[] elemente;
}

int* Matrice::operator[](int index) const {
	return elemente[index];
}

Matrice Matrice::operator+(const Matrice& matrix) {
	Matrice matriceNoua(this->l, this->c);
	for (int i = 0; i < this->l; ++i) {
		for (int j = 0; j < this->c; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			matriceNoua.elemente[i][j] = a + b;
		}
	}
	return matriceNoua;
}

Matrice Matrice::operator-(const Matrice& matrix) {
	Matrice matriceNoua(this->l, this->c);
	for (int i = 0; i < this->l; ++i) {
		for (int j = 0; j < this->c; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			matriceNoua.elemente[i][j] = a - b;
		}
	}
	return matriceNoua;
}

Matrice Matrice::operator*(const Matrice& matrix) {
	Matrice matriceNoua(this->l, this->c);

	for (int i = 0; i < this->l; ++i) {
		for (int j = 0; j < matrix.c; j++) {
			matriceNoua.elemente[i][j] = 0;
			for (int k = 0; k < this->c; ++k) {
				matriceNoua.elemente[i][j] += this->elemente[i][k] * matrix.elemente[k][j];
			}
		}
	}
	return matriceNoua;
}

Matrice Matrice::operator/(const Matrice& matrix) {
	Matrice matriceNoua(this->l, this->c);
	for (int i = 0; i < this->l; ++i) {
		for (int j = 0; j < this->c; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			matriceNoua.elemente[i][j] = a / b;
		}
	}
	return matriceNoua;
}

Matrice& Matrice::operator=(const Matrice& matrix) {
	this->l = matrix.l;
	this->c = matrix.c;
	for (int i = 0; i < matrix.l; i++) {
		for (int j = 0; j < matrix.c; j++) {
			this->elemente[i][j] = matrix.elemente[i][j];
		}
	}
	return *this;
}

Matrice& Matrice::operator+=(const Matrice& matrix) {
	for (int i = 0; i < this->l; i++)
		for (int j = 0; j < this->c; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			this->elemente[i][j] = a + b;
		}
	return *this;
}

Matrice& Matrice::operator-=(const Matrice& matrix) {
	for (int i = 0; i < this->l; i++)
		for (int j = 0; j < this->c; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			this->elemente[i][j] = a - b;
		}
	return *this;
}

Matrice& Matrice::operator*=(const Matrice& matrix) {
	for (int i = 0; i < this->l; i++)
		for (int j = 0; j < this->c; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			this->elemente[i][j] = a * b;
		}
	return *this;
}

Matrice& Matrice::operator/=(const Matrice& matrix) {
	for (int i = 0; i < this->l; i++)
		for (int j = 0; j < this->c; j++) {
			int a = this->elemente[i][j];
			int b = matrix.elemente[i][j];
			this->elemente[i][j] = a / b;
		}
	return *this;
}

bool Matrice::operator==(const Matrice& matrix) const {
	if (this->c * this->l == matrix.c * matrix.l && this->elemente == matrix.elemente) {
		return true;
	}
	else {
		return false;
	}
}

bool Matrice::operator<(const Matrice& matrix) const {
	if (this->c * this->l < matrix.c * matrix.l) {
		return true;
	}
	else {
		return false;
	}
}

bool Matrice::operator<=(const Matrice& matrix) const {
	if (this->c * this->l <= matrix.c * matrix.l) {
		return true;
	}
	else {
		return false;
	}
}

bool Matrice::operator>(const Matrice& matrix) const {
	if (this->c * this->l > matrix.c * matrix.l) {
		return true;
	}
	else {
		return false;
	}
}

bool Matrice::operator>=(const Matrice& matrix) const {
	if (this->c * this->l >= matrix.c * matrix.l) {
		return true;
	}
	else {
		return false;
	}
}

bool Matrice::operator!=(const Matrice& matrix) const {
	if (this->c * this->l != matrix.c * matrix.l) {
		return true;
	}
	else {
		return false;
	}
}

Matrice& Matrice::operator++() {
	for (int i = 0; i < this->l; ++i) {
		for (int j = 0; j < this->c; ++j) {
			if (i == j) {
				this->elemente[i][j] += 1;
			}
		}
	}
	return *this;
}

Matrice& Matrice::operator--() {
	for (int i = 0; i < this->l; ++i) {
		for (int j = 0; j < this->c; ++j) {
			if (i == j) {
				this->elemente[i][j] -= 1;
			}
		}
	}
	return *this;
}

Matrice Matrice::operator--(int dummy) {
	Matrice temp = *this;
	--*this;
	return temp;
}

Matrice Matrice::operator++(int dummy) {
	Matrice temp = *this;
	++*this;
	return temp;
}

ostream& Matrice::operator<<(ostream& os) const {
	for (int i = 0; i < this->l; ++i) {
		for (int j = 0; j < this->c; ++j) {
			os << this->elemente[i][j] << " ";
		}
		os << endl;
	}
	os << endl;
	return os;
}

istream& Matrice::operator>>(istream& is) {
	cout << "Introduceti elementele matricei : " << endl;
	for (int i = 0; i < this->l; ++i) {
		for (int j = 0; j < this->c; ++j) {
			is >> this->elemente[i][j];
		}
	}
	return is;
}

Matrice operator+(const Matrice& mat1, const Matrice& mat2) {
	Matrice matriceNoua;
	for (int i = 0; i < matriceNoua.getL(); ++i) {
		for (int j = 0; j < matriceNoua.getC(); ++j) {
			matriceNoua.elemente[i][j] = mat1.elemente[i][j] + mat2.elemente[i][j];
		}
	}
	return matriceNoua;
}

Matrice operator-(const Matrice& mat1, const Matrice& mat2) {
	Matrice matriceNoua;
	for (int i = 0; i < matriceNoua.getL(); ++i) {
		for (int j = 0; j < matriceNoua.getC(); ++j) {
			matriceNoua.elemente[i][j] = mat1.elemente[i][j] - mat2.elemente[i][j];
		}
	}
	return matriceNoua;
}

Matrice operator*(const Matrice& mat1, const Matrice& mat2) {
	Matrice matriceNoua;
	for (int i = 0; i < matriceNoua.getL(); ++i) {
		for (int j = 0; j < matriceNoua.getC(); ++j) {
			matriceNoua.elemente[i][j] = mat1.elemente[i][j] * mat2.elemente[i][j];
		}
	}
	return matriceNoua;
}

Matrice operator/(const Matrice& mat1, const Matrice& mat2) {
	Matrice matriceNoua;
	for (int i = 0; i < matriceNoua.getL(); ++i) {
		for (int j = 0; j < matriceNoua.getC(); ++j) {
			matriceNoua.elemente[i][j] = mat1.elemente[i][j] / mat2.elemente[i][j];
		}
	}
	return matriceNoua;
}

bool operator==(const Matrice& mat1, const Matrice& mat2) {
	if (mat1.c * mat1.l == mat2.c * mat2.l && mat1.elemente == mat2.elemente) {
		return true;
	}
	else {
		return false;
	}
}

bool operator<(const Matrice& mat1, const Matrice& mat2) {
	if (mat1.c * mat1.l < mat2.c * mat2.l) {
		return true;
	}
	else {
		return false;
	}
}

bool operator<=(const Matrice& mat1, const Matrice& mat2) {
	if (mat1.c * mat1.l <= mat2.c * mat2.l) {
		return true;
	}
	else {
		return false;
	}
}

bool operator>(const Matrice& mat1, const Matrice& mat2) {
	if (mat1.c * mat1.l > mat2.c * mat2.l) {
		return true;
	}
	else {
		return false;
	}
}

bool operator>=(const Matrice& mat1, const Matrice& mat2) {
	if (mat1.c * mat1.l >= mat2.c * mat2.l) {
		return true;
	}
	else {
		return false;
	}
}

bool operator!=(const Matrice& mat1, const Matrice& mat2) {
	if (mat1.c * mat1.l != mat2.c * mat2.l) {
		return true;
	}
	else {
		return false;
	}
}

ostream& operator<<(ostream& os, const Matrice& matrix) {
	for (int i = 0; i < matrix.l; ++i) {
		for (int j = 0; j < matrix.c; ++j) {
			os << matrix.elemente[i][j];
		}
	}
	return os;
}

istream& operator>>(istream& is, const Matrice& matrix) {
	for (int i = 0; i < matrix.l; ++i) {
		for (int j = 0; j < matrix.c; ++j) {
			is >> matrix.elemente[i][j];
		}
	}
	return is;
}
