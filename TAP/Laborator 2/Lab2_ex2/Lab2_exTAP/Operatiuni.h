#pragma once
#ifndef OPERATIUNI_H
#define OPERATIUNI_H
#include <iostream>

using namespace std;

class Operatiuni {
public:
	virtual float getSumaTotala() = 0;
	virtual float getDobanda() = 0;
	virtual void depunere(float suma) = 0;
	virtual void extragere(float suma) = 0;
};
#endif
