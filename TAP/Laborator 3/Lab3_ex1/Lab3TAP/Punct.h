#ifndef PUNCT_H
#define PUNCT_H

#include "Dreapta.h"
#include <iostream>

class Punct {
private:
    int x;
    int y;
    static Dreapta dreapta;
    static int semiplanPozitivCount;
    static int semiplanNegativCount;
    static int dreaptaCount;

public:
    Punct(int x, int y);
    Punct(const Punct& param);
    ~Punct();
    double getX();
    double getY();
    void setX(double x);
    void setY(double y);
    void afisare();
    inline static int getInstance() {
        return dreaptaCount;
    }
    friend double distanta(const Punct& p1, const Punct& p2);
    static void setDreapta(const Dreapta& d);

    static int getSemiplanPozitivCount();
    static int getSemiplanNegativCount();
    static int getDreaptaCount();
};

#endif 
