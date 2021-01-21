#include <iostream>
#include <stdio.h>
#include <time.h> 
#include <fstream>

using namespace std;

const int w = 400;
const int h = 400;

int R[w][h];
int G[w][h];
int B[w][h];

void obrazek()
{
	srand(time(NULL));
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
		{
			R[i][j] = rand()%256;
			G[i][j] = rand()%256;
			B[i][j] = rand()%256;
		}
	}
}

void saveppm()
{
	ofstream plik;
	plik.open("obrazek.ppm");

	plik << "P3" << endl << "#komentarz" << endl << w << " " << h << endl << 255 << endl;
	for (int j = 0; j < h; j++)
	{
		for (int i = 0; i < w; i++)
		{
			plik << R[i][j] << ' ' << G[i][j] << ' ' << B[i][j] << ' ';
		}
		plik << endl;
	}
	plik.close();
}

int main()
{
	obrazek();
	saveppm();
	return 0;
}