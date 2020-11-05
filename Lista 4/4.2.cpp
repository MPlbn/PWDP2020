#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;


float Oblicz_sred(int a)
{
	float x = 0;
	for (int i = 0; i < a; i++)
	{
		x += float(rand()) / RAND_MAX;
	}
	
	float srednia = x / a;
	return srednia;
}

int main(void)
{
	ofstream plik;
	plik.open("Wyniki.txt"); // W ogóle nie powstaje plik.
	int n = 10;
	for (int i = 0; i < 100; i++)
	{
		plik << Oblicz_sred(n) << ", ";
		n += 500;
	}
	plik.close();
	return 0;
}