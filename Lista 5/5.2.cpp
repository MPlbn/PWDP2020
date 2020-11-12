#include <iostream>
using namespace std;

float readHeight(void)
{
	float x;
	cout << "Podaj swoj wzrost (w metrach): ";
	cin >> x;
	return x;
}

int readMass(void)
{
	int x;
	cout << "Podaj swoja wage (liczba calkowita w kg): ";
	cin >> x;
	return x;
}

float BMI(float x, int y)
{
	float wynik = y / (x * x);
	return wynik;
}

int BMIprint(float x)
{
	cout << "Twoje BMI wynosi: " << x << ".";
	if (x <= 18.5)
	{
		cout << endl << "Masz niedowage!!!";
	}
	else if (x >= 25)
	{
		cout << endl << "Masz nadwage!!!";
	}
	else
	{
		cout << endl << "Jestes w normie, gratuluje!";
	}
	return 0;
}
int main()
{
	BMIprint(BMI(readHeight(), readMass()));
}