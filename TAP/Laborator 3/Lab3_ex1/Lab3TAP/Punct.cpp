#include "Punct.h"
#include <cmath>

Dreapta Punct::dreapta(0, 0);
int Punct::semiplanPozitivCount = 0;
int Punct::semiplanNegativCount = 0;
int Punct::dreaptaCount = 0;

Punct::Punct(int x, int y) : x(x), y(y) {
    if (dreapta.evaluare(x, y) == 0) {
        dreaptaCount++;
    }
    else if (dreapta.evaluare(x, y) > 0) {
        semiplanPozitivCount++;
    }
    else {
        semiplanNegativCount++;
    }
}

Punct::Punct(const Punct& param) : x(param.x), y(param.y) {}

Punct::~Punct() {
    if (dreapta.evaluare(x, y) == 0) {
        dreaptaCount--;
    }
    else if (dreapta.evaluare(x, y) > 0) {
        semiplanPozitivCount--;
    }
    else {
        semiplanNegativCount--;
    }
}

double Punct::getX() {
    return this->x;
}
double Punct::getY() {
    return this->y;
}
void Punct::setX(double x) {
    this->x = x;
}
void Punct::setY(double y) {
    this->x = x;
}

void Punct::afisare() {
    cout << endl << "x : " << this->x << endl;
    cout << endl << "y : " << this->y << endl;
}

double distanta(const Punct& p1, const Punct& p2) {
    double dx = p1.x - p2.x;
    double dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy);
}

void Punct::setDreapta(const Dreapta& d) {
    dreapta = d;
}

int Punct::getSemiplanPozitivCount() {
    return semiplanPozitivCount;
}

int Punct::getSemiplanNegativCount() {
    return semiplanNegativCount;
}

int Punct::getDreaptaCount() {
    return dreaptaCount;
}
