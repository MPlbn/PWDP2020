#include <iostream>
using namespace std;

int tab[] = { 3, 6, 7, 10, 145, 13 };

int Wypisz_witam(void)
{
	cout << "Hello World";
	return 0;
}

float wartosc(void)
{
	float x;
	cout << "Podaj liczbe rzeczywista: ";
	cin >> x;
	return x;
}

int suma(void)
{
	int x;
	int y;
	cout << "Podaj liczbe pierwsza: ";
	cin >> x;
	cout << "Podaj liczbe druga: ";
	cin >> y;
	int suma = x + y;
	return suma;
}

int miszmasz(void)
{
	int x;
	float a;
	float b;
	cout << "Podaj liczbe calkowita: ";
	cin >> x;
	cout << "Podaj pierwsza liczbe rzeczywista: ";
	cin >> a;
	cout << "Podaj druga liczbe rzeczywista: ";
	cin >> b;
	int wynik = x * a * b;
	return wynik;
}

int tablica(void)
{
	int tabsize = sizeof(tab) / sizeof(tab[0]);
	int wynik = 1;
	for (int i = 0; i < tabsize; i++)
	{
		wynik = wynik * tab[i];
	}
	return wynik;
}

int main(void)
{
	Wypisz_witam();
	cout << endl;
	cout << wartosc() << endl;
	cout << suma()<< endl;
	cout << miszmasz() <<endl;
	cout << tablica();
}