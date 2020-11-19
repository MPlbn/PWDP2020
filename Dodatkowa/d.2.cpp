#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int suma = 0;
	int sumaa = 0;
	vector <int> wektor;
	for (int i = 0; i < 15; i++)
	{
		wektor.push_back(i);
	}

	for (int i = 0; i < wektor.size(); i++)
	{
		suma += wektor[i];
	}
	cout << suma;
	return 0;
}