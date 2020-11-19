#include <iostream>
#include <string>

using namespace std;

int show_map_p(string x[4][4])
{
	cout << "\tA\tB\tC\tD" <<endl;
	for (int i = 0; i < 4; i++)
	{
		cout << i << '\t';
		for (int j = 0; j < 4; j++)
		{
			cout <<	x[i][j] <<"\t";
		}
		cout << endl;
	}
	return 0;
}

string placement(string x[4][4])
{
	string pola[4][4] = { {"A1", "A2", "A3", "A4"}, {"B1", "B2", "B3", "B4"}, {"C1", "C2", "C3", "C4"}, {"D1", "D2", "D3", "D4"} };
	string choice;
	cout << "Do dyspozycji masz \x1b[32m2\x1b[0m statki o wymiarach 2x1\n\nWybierz miejsce na umiejscowienie pierwszego statku(Duza litera i numer): "; 
	cin >> choice;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (choice == pola[i][j])
			{
				x[i][j] = "N";
			}
			else
			{
				continue;
			}
		}
	}
	return x[4][4];
}


int main()
{
	string pusta_plansza[4][4] = { {"*", "*", "*", "*"}, {"*", "*", "*", "*"}, {"*", "*", "*", "*"}, {"*", "*", "*", "*"} };
	string plansza_gracza[4][4] = {placement(pusta_plansza)};
	show_map_p(plansza_gracza);
}