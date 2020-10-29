#include <iostream>
using namespace std;

int main()
{
    long long sil = 1;
    for(int N = 1;N<100;N++)
    {
        sil*=N;
        cout<<N<<"!= "<<sil<<endl;
    }
}
//Silnia zaczęła się psuć przy 20!, podejrzewam, że jest to spowodowane zbyt małą ilością wyświetlanych cyfr.