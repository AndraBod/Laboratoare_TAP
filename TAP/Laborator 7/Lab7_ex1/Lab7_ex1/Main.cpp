#include "Sablon.h"

int main() 
{
    Sablon<int> sablonInt;
    int intArr[] = { 4, 2, 8, 1, 5, 7 };
    int dimensiuneInt = sizeof(intArr) / sizeof(int);

    cout << "Max int: " << sablonInt.maxim(intArr, dimensiuneInt) << endl;
    cout << "Min int: " << sablonInt.minim(intArr, dimensiuneInt) << endl;

    int cheieInt = 5;
    cout << "C?utare secven?ial? pentru " << cheieInt << ": " 
        << sablonInt.cautareSecventiala(intArr, dimensiuneInt, cheieInt) << endl;

    sablonInt.sortareBule(intArr, dimensiuneInt);
    cout << "Tablou int sortat: ";
    for (int i = 0; i < dimensiuneInt; ++i) 
    {
        cout << intArr[i] << " ";
    }
    cout << endl;

    Sablon<const char*> sablonChar; 
    const char* charArr[] = { "m?r", "banan?", "portocal?", "strugure", "kiwi" };  
    int dimensiuneChar = sizeof(charArr) / sizeof(const char*);

    sablonChar.sortareBule(charArr, dimensiuneChar);
    cout << "Tablou caractere sortat: ";
    for (int i = 0; i < dimensiuneChar; ++i) 
    {
        cout << charArr[i] << " ";
    }
    cout << endl;

    return 0;
}
