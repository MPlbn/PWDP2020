#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

void show_map(string const (&x)[4][4]) // wyœwietla planszê
{
	//cout << "Tak wygl¹da Twoja mapa '\x1b[33m$\x1b[0m' oznacza statek '*' oznacza puste pole, a '\x1b[31m*\x1b[0m' oznacza pole ustrzelone przez przeciwnika\n\n";
	cout << "\tA\tB\tC\tD" <<endl;
	for (int i = 0; i < 4; i++)
	{
		cout << i + 1 << '\t';
		for (int j = 0; j < 4; j++)
		{
			cout <<	x[i][j] <<"\t";
		}
		cout << endl;
	}
	cout << "\n\n\n";
}

void placement(string (&x)[4][4]) //Ustawia pozycje statkow gracza
{
	string pola[4][4] = { {"A1", "A2", "A3", "A4"}, {"B1", "B2", "B3", "B4"}, {"C1", "C2", "C3", "C4"}, {"D1", "D2", "D3", "D4"} };
	string choice;
	int iloscstatkow = 4;
	for (int i = iloscstatkow; i > 0; i--)
	{
		show_map(x);
		cout << "Do dyspozycji masz \x1b[32m"<< iloscstatkow <<"\x1b[0m statki o wymiarach 1x1\n\nWybierz miejsce na umiejscowienie pierwszego statku(Duza litera i numer): "; 
		cin >> choice;
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				//cout << i << "\t" << j << "\n";
				if (choice == pola[i][j])
				{
					//cout << "\nFound square\n";
					x[j][i] = "\x1b[33m$\x1b[0m";
				}
			}
		}
		iloscstatkow -= 1;
	}
}

void placement_comp(int (&tab)[4][4], int iloscstatkow) //Ustawia pozycje statków komputera
{
	for (int i = iloscstatkow; i > 0; i--)
	{
		int x = rand() % 4;
		int y = rand() % 4;
		for (;;)
		{
			if (tab[x][y] == 0)
			{
				tab[x][y] = 1;
				break;
			}
		}
	}
}

void shots_taken(string(&x)[4][4], int(&y)[4][4], int &statki) //Gracz strzela w pole
{
	string pola[4][4] = { {"A1", "A2", "A3", "A4"}, {"B1", "B2", "B3", "B4"}, {"C1", "C2", "C3", "C4"}, {"D1", "D2", "D3", "D4"} };
	string choice;
	cout << "W jakie pole chcesz oddac strzal?: ";
	cin >> choice;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (choice == pola[i][j])
			{
				if (y[j][i] == 1)
				{
					x[j][i] = "\x1b[31m$\x1b[0m";
					statki -= 1;
				}
				else
				{
					x[j][i] = "\x1b[31mX\x1b[0m";
				}
			}
		}
	}
}

void shots_taken_comp(string(&a)[4][4]) //strza³ oddany przez komputer
{
	for (;;)
	{
		int x = rand() % 4;
		int y = rand() % 4;	
		if (a[x][y] == "\x1b[33m$\x1b[0m")
		{
			a[x][y] = "\x1b[31m$\x1b[0m";
			break;
		}
		else if (a[x][y] == "\x1b[31m$\x1b[0m" || a[x][y] == "\x1b[31m*\x1b[0m")
		{
			continue;
		}
		else
		{
			a[x][y] = "\x1b[31m*\x1b[0m";
			break;
		}
	}
}

void show_stateofthegame(string (&x)[4][4], string (&y)[4][4], int statki)
{
	if (statki == 0)
	{
		cout << "Gratulacje! Wygrales!";
		_exit(0);
	}
	else
	{
		cout << "Twoja plansza\n\n";
		show_map(x);
		cout << "Plansza przeciwnika\n\n";
		show_map(y);
	}
}


int main()
{
	string plansza_gracza[4][4] = { {"*", "*", "*", "*"}, {"*", "*", "*", "*"}, {"*", "*", "*", "*"}, {"*", "*", "*", "*"} };
	string plansza_komputera[4][4] = { {"*", "*", "*", "*"}, {"*", "*", "*", "*"}, {"*", "*", "*", "*"}, {"*", "*", "*", "*"} };
	int pola[4][4] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
	int statki_przeciwnika = 4;
	placement_comp(pola, statki_przeciwnika);
    placement(plansza_gracza);
	show_stateofthegame(plansza_gracza, plansza_komputera,statki_przeciwnika);
	for (;;)
	{
		shots_taken(plansza_komputera, pola, statki_przeciwnika);
		shots_taken_comp(plansza_gracza);
		show_stateofthegame(plansza_gracza, plansza_komputera, statki_przeciwnika);
	}

    return 0;
}