#include "StivaStatica.h"
#include<iostream>

using namespace std;
Array_Stack::Array_Stack(int max) :top(-1),max(max){
	this->vector = new int[max];
}
Array_Stack::Array_Stack(const Array_Stack& param):max(param.max),top(param.top){
    this->vector = new int[max];
    for (int i = 0;i < top;++i)
        this->vector[i] = param.vector[i];
}
Array_Stack::~Array_Stack(){
	this->top = -1;
	this->max = 0;
	delete[]this->vector;
}
bool Array_Stack::isempty() {
    if (top == -1) {
        return true;
    }
    return false;
}
bool Array_Stack::isfull() {
    if (top == max) {
        return true;
    }
    return false;
}
int Array_Stack::peek() {
    if (isempty()) throw Stack_Underflow();
    else return this->vector[this->top];
}
int Array_Stack::pop() {
    if (isempty()) throw Stack_Underflow();
    else
    {
       return this->vector[top--];
    }
}
void Array_Stack::push(int element) {
    if (isfull()) throw Stack_Overflow();
    else this->vector[++top] = element;
}
void Array_Stack::print() {
    for (int i = 0;i <= top;++i) {
        cout << vector[i] << " ";
    }
}
void Array_Stack::Stack_Overflow::printErr()
{
    cout << "Error: Stack Overflow" << endl;
}

void Array_Stack::Stack_Underflow::printErr()
{
    cout << "Error: Stack Underflow" << endl;
}
