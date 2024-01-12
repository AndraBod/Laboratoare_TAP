#include "StivaStatica.h"
#include<iostream>

using namespace std;
int main() {
	Array_Stack st(100);
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	st.print();
	int a = st.peek();
	cout<< endl << "Varful stivei este " << a;
	a = st.pop();
	cout << endl << "Am sters elementul: " << a;
	a = st.pop();
	cout << endl << "Am sters elementul: " << a;
	cout << endl << "Stiva dupa stergere: ";
	st.print();
	return 0;
}