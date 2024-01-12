#include "ListaSimpluInlantuita.h"
#include <iostream>

LSI::LSI() : head(nullptr) {}

void LSI::inserareLaInceput(int val) {
    Nod* nouNod = new Nod(val);
    nouNod->next = head;
    head = nouNod;
}

void LSI::stergereDeLaInceput() {
    if (head == nullptr) {
        std::cout << "Lista este goala. Nu se poate sterge.\n";
        return;
    }

    Nod* temp = head;
    head = head->next;
    delete temp;
}

void LSI::afisare() {
    Nod* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << "\n";
}

LSI::~LSI() {
    // Destructor pentru a elibera memoria alocata pentru noduri
    Nod* current = head;
    Nod* nextNode;

    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
}


