#include <iostream>

using namespace std;

int main()
{
	const int SZER = 70;
	const int WYS = 50;

	for (int i = 0; i < WYS; i++)
	{
		for (int j = 0; j < SZER; j++)
		{
			int r = (j / float(SZER)) * 255;
			int g = (i / float(WYS)) * 155;
			int b = (i / float(SZER)) * 55;
			cout << "\x1b[48;2;" << r << ";" << g << ";" << b << "m" << " \x1b[0m";
		}
		cout << endl;
	}
	return 0;
}