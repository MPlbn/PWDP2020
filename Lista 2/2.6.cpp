#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	cout << "\x1b[48m      \x1b[0m\x1b[41m    \x1b[0m\x1b[48m      \x1b[0m" << endl;
	cout << "\x1b[48m    \x1b[0m\x1b[41m        \x1b[0m\x1b[48m    \x1b[0m" << endl;
	cout << "\x1b[48m  \x1b[0m\x1b[41m            \x1b[0m\x1b[48m  \x1b[0m" << endl;
	cout << "\x1b[44m                \x1b[0m" << endl;
	cout << "\x1b[45m                \x1b[0m" << endl;
	cout << "\x1b[46m                \x1b[0m" << endl;
	cout << "\x1b[47m                \x1b[0m" << endl;
	cout << "\x1b[48m  \x1b[0m\x1b[41m            \x1b[0m\x1b[48m  \x1b[0m" << endl;
	return 0;
}