#include "Carte.h"
#include <string>
#include <vector>

int main() {
    vector<Carte> biblioteca;
    biblioteca.push_back(Carte("Ion", "Liviu Rebreanu", 123456, 30));
    biblioteca.push_back(Carte("Enigma Otiliei", "George Calinescu", 789012, 25));
    biblioteca.push_back(Carte("Moara cu noroc", "Ioan Slavici", 654321, 40));
    string autorCautat;
    cout << "Introduceti numele autorului pentru afisare: ";
    getline(cin, autorCautat);
    cout << "\nCartile scrise de autorul " << autorCautat << " sunt:\n";
    for (const Carte& carte : biblioteca) 
    {
        if (carte.getAutor() == autorCautat) 
        {
            carte.print();
        }
        else
        {
            cout << "Nu sunt carti scrise de acest autor.";
        }
    }
    cout << "\nNumarul total de instante ale clasei Carte este: " << Carte::getInstance() << endl;

    return 0;
}
