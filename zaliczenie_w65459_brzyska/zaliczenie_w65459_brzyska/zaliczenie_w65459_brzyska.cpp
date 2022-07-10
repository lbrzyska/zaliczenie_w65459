// zaliczenie_w65459_brzyska.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "Figura.h"

int main()
{
    Figura p2(20.5, "zielony");
    cout << "Pole prostokata p2 jest rowne: " << p2.oblicz_Pole()<<endl;
    Figura k1("prostokat", 10, 20, "czerowny");
    Figura t1("trojkat", 13.5, 11.7, "czerwony");
    k1.piszDane();
    Figura p3 = p2;
    Figura t3(12);
    cout << "Pole figury k1 jest rowne: " << k1.oblicz_Pole() << endl;
    cout << "Pole figury t1 jest rowne: " << t3.oblicz_Pole() << endl;;
    //cout << t3 << endl;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
