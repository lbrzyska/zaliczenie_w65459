#pragma once
using namespace std;
#include <iostream>

class Figura
{
public:

	string nazwa;
	double wysokosc;
	double szerokosc;
	string kolor;
public:
	Figura(string = "kwadrat", double = 10, double = 10, string = "czarny");
	Figura(double bok, string kol);
	Figura(const Figura& p2);
	Figura(double x);
	int oblicz_Pole();
	int piszDane();

};

