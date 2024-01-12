#ifndef NOD_H
#define NOD_H

class LSI;

class Nod {
private:
    int data;
    Nod* next;

public:
    Nod(int val);
    friend class LSI;
};

#endif

