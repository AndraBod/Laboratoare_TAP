#ifndef LSI_H
#define LSI_H
#include "Nod.h"

class LSI {
private:
    Nod* head;

public:
    LSI();
    void inserareLaInceput(int val);
    void stergereDeLaInceput();
    void afisare();
    ~LSI();
};

#endif
