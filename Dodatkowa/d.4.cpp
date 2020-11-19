#include<iostream>
#include<vector>
using namespace std;

int fibo(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return(fibo(n - 1) + fibo(n - 2));
	}

}

int main()
{
	vector <int> wektor;
	for (;;)
	{
		int a;
		cout << "Podaj numer liczby z ciagu fibonacciego: ";
		cin >> a;
		wektor.push_back(fibo(a));
		cout << fibo(a) << endl;
		cout << "Poprzednie liczby: ";
		for (int i = 0; i < wektor.size(); i++)
		{
			cout << wektor[i] << ", ";
		}
		cout << "\n";
	}
	return 0;
}