#include "ListaSimpluInlantuita.h"
#include <iostream>

int main() 
{
    LSI lista;

    lista.inserareLaInceput(30);
    lista.inserareLaInceput(20);
    lista.inserareLaInceput(10);

    std::cout << "Lista initiala: ";
    lista.afisare();

    lista.stergereDeLaInceput();

    std::cout << "Lista dupa stergere de la inceput: ";
    lista.afisare();

    return 0;
}