#include "Figura.h"
using namespace std;
#include <iostream>


Figura::Figura(string n, double w, double s, string k) {
	nazwa = n;
	wysokosc = w;
	szerokosc = s;
	kolor = k;
}
Figura::Figura(double bok, string kol) {
	szerokosc = bok;
	kolor = kol;
}
Figura::Figura(const Figura &p2) {
	nazwa= p2.nazwa;
	wysokosc = p2.wysokosc;
	szerokosc = p2.szerokosc;
	kolor = p2.kolor;

}
Figura::Figura(double x) {
	wysokosc = x;
}
int Figura::oblicz_Pole(){
	if (nazwa == "kwadrat") cout << wysokosc * wysokosc;
	else if (nazwa == "prostokat") cout << wysokosc * szerokosc;
	else if (nazwa == "trojkat") cout << (wysokosc * szerokosc) / 2;
	else cout << "Nie da sie obliczyc pola " << endl;
	return 0;
}
int Figura::piszDane() {
	cout << "Podaj nazwe: " << " ";
	cin >> nazwa;
	cout << "Podaj wysokosc: " << " ";
	cin >> wysokosc;
	cout << "Podaj szerokosc: " << " ";
	cin >> szerokosc;
	cout << "Podaj kolor: " <<" ";
	cin >> kolor;
	return 0;
}
