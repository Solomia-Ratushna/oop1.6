//////////////////////////////////////////////////////////////////////////////
// Source.cpp 
// �������� ���� ������� � ������� main

#include <iostream>
#include "Rational1.h"
int main()
{
    Rational1::Pair a, b, c, d;
    Rational1 f;
    
    f.SetP(0, 0);
    int result;

    cout << "____________________" << endl;
    cout << "\nPair a " << endl;
    cout << "(x/y)" << endl;
    a.Init(1, 2);
    a.Display();
    cout << "____________________" << endl;
    cout << "\nPair b " << endl;
    cout << "(x/y)" << endl;
    b.Init(2, 1);
    b.Display();
    cout << "____________________" << endl;
    cout << "Pair c" << endl;
    cout << "(x/y)" << endl;
    c.Init(1, 2);
    c.Display();

    cout << "____________________" << endl;
    cout << "\na and b" << endl;
    result = f.ComparePairs(a, b);
    f.ComparePairsResult(result);

    cout << "\na and c" << endl;
    result = f.ComparePairs(a, c);
    f.ComparePairsResult(result);

    cout << "\nb and c" << endl;
    result = f.ComparePairs(b, c);
    f.ComparePairsResult(result);

    return 0;
}