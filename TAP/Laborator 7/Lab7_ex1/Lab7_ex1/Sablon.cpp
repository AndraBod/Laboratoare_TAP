#include "Sablon.h"


template <typename T>
T Sablon<T>::maxim(T arr[], int dimensiune) 
{
    T maxim = arr[0];
    for (int i = 1; i < dimensiune; ++i) 
    {
        if (arr[i] > maxim) 
        {
            maxim = arr[i];
        }
    }
    return maxim;
}

template <typename T>
T Sablon<T>::minim(T arr[], int dimensiune) 
{
    T minim = arr[0];
    for (int i = 1; i < dimensiune; ++i) 
    {
        if (arr[i] < minim) 
        {
            minim = arr[i];
        }
    }
    return minim;
}

template <typename T>
int Sablon<T>::cautareSecventiala(T arr[], int dimensiune, T cheie) 
{
    for (int i = 0; i < dimensiune; ++i) 
    {
        if (arr[i] == cheie)
        {
            return i;
        }
    }
    return -1;
}

template <typename T>
int Sablon<T>::cautareBinara(T arr[], int dimensiune, T cheie) 
{
    int stanga = 0;
    int dreapta = dimensiune - 1;
    while (stanga <= dreapta) 
    {
        int mijloc = stanga + (dreapta - stanga) / 2;
        if (arr[mijloc] == cheie) 
        {
            return mijloc;
        }
        else if (arr[mijloc] < cheie) 
        {
            stanga = mijloc + 1;
        }
        else 
        {
            dreapta = mijloc - 1;
        }
    }
    return -1; 
}

template <typename T>
void Sablon<T>::sortareBule(T arr[], int dimensiune) 
{
    for (int i = 0; i < dimensiune - 1; ++i) 
    {
        for (int j = 0; j < dimensiune - i - 1; ++j) 
        {
            if (arr[j] > arr[j + 1]) 
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
