#include <iostream>
using namespace std;

int main()
{
	float x;
	cout << "Podaj liczbe: ";
	cin >> x;
	int a = x / 3;
	float b = x / 3;
	if (a == b)
	{
		cout << "Liczba jest podzielna przez 3";
	}
	else
	{
		cout << "Liczba nie jest podzielna przez 3";
	}
	return 0;
}