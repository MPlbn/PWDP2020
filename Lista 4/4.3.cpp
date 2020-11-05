#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int zakonczenie()
{
	string a;
	cout << "\n\nCzy chcesz zamknac program?(tak/nie): ";
	for (;;)
	{
		cin >> a;
		if (a == "tak")
		{
			break;
		}
		else if (a == "nie")
		{
			cout << "Tak naprawde nie masz wyboru :p\n";
			break;
		}
		else
		{
			cout << "Bledna odpowiedz, wprowadz poprawna(tak/nie): ";
		}
	}
	return 0;
}

int main()
{
	int a;
	int blad = 0;
	cout << "Witaj! Oto gra zgadywanka! Musisz zgadnac liczbe od 1 do 10!\n";
	Sleep(1000);
	for (;;)
	{
		cout << "Twoja liczba jest generowana...\n";
		int x = rand() % 10 + 1;
		if (blad >= 10)
		{
			cout << "Nie zgadles juz " << blad << "razy! Troche Ci podpowiem. To na pewno nie jest liczba " << x << "\n";
		}
		Sleep(2000);
		cout << "Jaka liczbe wymyslilem?: ";
		cin >> a;
		if (a == x)
		{
			cout << "Brawo! Zgadles!";
			if (blad == 0)
			{
				cout << " Udalo Ci sie za pierwszym razem!";
			}
			else if (blad == 1)
			{
				cout << " Zanim Ci sie udalo, udzieliles blednej odowiedzi 1 raz";
			}
			else
			{
				cout << " Zanim Ci sie udalo, udzieliles blednej odpowiedzi " << blad << " razy.";
			}
			break;
		}
		else
		{
			cout << "Niestety nie udalo sie!\n\n";
			blad += 1;
		}
	}
	zakonczenie();
	cout << "Aby zamknac program wcisnij dowolny przycisk";
	_getch();
	return 0;
}
