#include "Dreapta.h"
#include<iostream>

using namespace std;

Dreapta::Dreapta(int m, int n) : m(m), n(n) {}
Dreapta::Dreapta(const Dreapta& param):m(param.m), n(param.n) {}
Dreapta::~Dreapta()
{
	this->m = 0;
	this->n = 0;
}
double Dreapta::getM() {
	return this->m;
}
double Dreapta::getN() {
	return this->n;
}
void Dreapta::setM(double m) {
	this->m = m;
}
void Dreapta::setN(double n) {
	this->n = n;
}
int Dreapta::evaluare(int x, int y) 
{
	return m * x + n - y;
}
