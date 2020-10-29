#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a;
    float x;
    float y;
    string wyb;


    for(;;)
    {
        cout<<"1. Podaj rodzaj dzialania(0: dodawanie, 1: mnozenie, 2: zamknij program)";
        cin>>a;
        if(a == 0)
        {
            cout<<"Podaj pierwsza liczbe: ";
            cin>>x;
            cout<<"Podaj druga liczbe: ";
            cin>>y;
            cout<<"Oto wynik dodawania: "<<x+y<<endl;
            for(;;)
            {
                cout<<"Czy chcesz wykonac kolejne dzialanie? (Tak/Nie): ";
                cin>>wyb;
                if(wyb == "Tak")
                {
                    break;
                }
                else if(wyb == "Nie")
                {
                    return 0;
                }
                else
                {
                    cout<<"Prosze wpisac poprawna odpowiedz."<<endl;
                }
            }
        }
        else if(a == 1)
        {
            cout<<"Podaj pierwsza liczbe: ";
            cin>>x;
            cout<<"Podaj druga liczbe: ";
            cin>>y;
            cout<<"Oto wynik mnozenia: "<<x*y<<endl;
            for(;;)
            {
                cout<<"Czy chcesz wykonac kolejne dzialanie? (Tak/Nie): ";
                cin>>wyb;
                if(wyb == "Tak")
                {
                    break;
                }
                else if(wyb == "Nie")
                {
                    return 0;
                }
                else
                {
                    cout<<"Prosze wpisac poprawna odpowiedz"<<endl;
                }
        	}
    	}
        else if( a == 2)
        {
            return 0;
        }
        else
        {
            cout<<"Blad podaj poprawny rodzaj dzialania";
        }
    }

    return 0;
}
