#include <iostream>
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
	int a;
	cout << "Podaj numer liczby z ciagu fibonacciego: ";
	cin >> a;
	cout<<fibo(a);
	return 0;
}