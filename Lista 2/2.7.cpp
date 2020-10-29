#include <iostream>
#include<math.h>
#include<fstream>
using namespace std;

int main()
{
    for (int i = 0; i<=360; i++)
    {
        float x =cos (i * M_PI/360);
        float y = x*x;
        cout<<"x= "<<i<<"\t\t\t"<<"cos("<<i<<")= "<<x<<"\t\t\t"<<"cos^2("<<i<<")= "<<y<<endl;
        ofstream Plik("wynik.dat");
        Plik<<x<<"\t\t\t"<<y;
    }
    return 0;
}
