//Source.ccp
#include <Windows.h> 
#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double N;

    Money a, b;
    cout << "Ввід першої кількості номіналів::" << endl;
    cin >> a;
    cout << a << endl << endl;
    cout << "Ввід другої кількості номіналів::" << endl;
    cin >> b;
    cout << b << endl << endl;

    cout << "a + b = " << a + b;
    cout << "a - b = " << a - b;
    cout << "(a + b)*N = " << a * b;

    cout << "++a" << endl; cout << ++a << endl;
    cout << "--a" << endl; cout << --a << endl;
    cout << "a++" << endl; cout << a++ << endl;
    cout << "a--" << endl; cout << a-- << endl;
	Triad A, B;

    return 0;
}
