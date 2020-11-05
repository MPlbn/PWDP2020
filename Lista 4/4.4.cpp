#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

int nastepny()
{
	string a;
	cout << "Czy chcesz zagrac ponownie?(tak/nie): ";
	for (;;)
	{
		cin >> a;
		if (a == "tak")
		{
			return 1;
		}
		else if (a == "nie")
		{
			return 0;
		}
		else
		{
			cout << "Bledna odpowiedz, wprowadz poprawna(tak/nie): ";
		}
	}

}

int zakonczenie()
{
	string a;
	cout << "\n\nCzy na pewno chcesz zamknac program?(tak/nie): ";
	for (;;)
	{
		cin >> a;
		if (a == "tak")
		{
			break;
			return 0;
		}
		else if (a == "nie")
		{
			cout << "Tak naprawde nie masz wyboru :p\n";
			break;
			return 0;
		}
		else
		{
			cout << "Bledna odpowiedz, wprowadz poprawna(tak/nie): ";
		}
	}
}

int gra(int zakres)
{
	int a;
	int blad = 0;
	Sleep(1000);
	for (;;)
	{
		cout << "Twoja liczba jest generowana...\n";
		int x = rand() % zakres + 1;
		if (blad >= 10)
		{
			cout << "Nie zgadles juz " << blad << "razy! Troche Ci podpowiem. To na pewno nie jest liczba " << x << "\n";
		}
		Sleep(1000);
		cout << "Jaka liczbe wymyslilem?: ";
		cin >> a;
		if (a == x)
		{
			cout << "Brawo! Zgadles!";
			if (blad == 0)
			{
				cout << " Udalo Ci sie za pierwszym razem!\n";
			}
			else if (blad == 1)
			{
				cout << " Zanim Ci sie udalo, udzieliles blednej odowiedzi 1 raz\n";
			}
			else
			{
				cout << " Zanim Ci sie udalo, udzieliles blednej odpowiedzi " << blad << " razy.\n";
			}
			break;
		}
		else
		{
			cout << "Niestety nie udalo sie!\n\n";
			blad += 1;
		}
	}
	return 0;
}

int main()
{
	int n = 10;
	cout << "Witaj! Oto gra zgadywanka! Musisz zgadnac liczbe od 1 do " << n << "!\n";
	for (;;)
	{
		gra(n);
		int x = nastepny();
		if (x == 1)
		{
			n += 10;
			cout << "Swietnie! Kontynuujmy wiec!\n\n" << "Teraz zakres liczb to od 1 do " << n << "!\n";
		}
		else
		{
			break;
		}
	}
	zakonczenie();
	cout << "Aby zamknac program wcisnij dowolny przycisk";
	_getch();
	return 0;
}
