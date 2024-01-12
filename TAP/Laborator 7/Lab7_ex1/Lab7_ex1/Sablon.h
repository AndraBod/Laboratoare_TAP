#ifndef SABLON_H
#define SABLON_H

#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

template <typename T>
class Sablon {
public:
    T maxim(T arr[], int dimensiune);

    T minim(T arr[], int dimensiune);

    int cautareSecventiala(T arr[], int dimensiune, T cheie);

    int cautareBinara(T arr[], int dimensiune, T cheie);

    void sortareBule(T arr[], int dimensiune);
};

template <>
void Sablon<char*>::sortareBule(char* arr[], int dimensiune)
{
    for (int i = 0; i < dimensiune - 1; ++i) 
    {
        for (int j = 0; j < dimensiune - i - 1; ++j) 
        {
            if (strcmp(arr[j], arr[j + 1]) < 0) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

#endif
