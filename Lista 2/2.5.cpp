#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    for (int i = 0;i<=105; i++)
    {
        cout<<"\x1b["<<i<<"m Hello! \x1b[0m\n";
    }
    return 0;
}
