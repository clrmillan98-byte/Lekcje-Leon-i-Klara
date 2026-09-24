#include <iostream>

using namespace std;

int main(){
    int a, b, c, wynik;



    cout << "Podaj trzy liczby: ";
    cin >> a >> b >> c;
    wynik = a+b+c;
    cout << "dodawanie " << wynik << endl;
    cout << " odejmowanie " << a-b << endl;
    cout << "mnożenie " << a*b << endl;
    cout << "dzielenie " << a/b << endl;
    cout << "reszta z dzielenia " << a%b << endl;


    cin >> a >> b;

    if (a>b){

    cout << " 676767 ";
    }
    else
    cout << " to nie mem wiec nie pokaze ";
    int i=0;
    while( 1 )
    {
        i=i+1;
        cout << i << " ";
        if( i==10 ) break;
    }

    cout << endl;

    for( int i=0; i<5; )
    {
        wynik = i++;
        cout << wynik << " " << i << endl;
    }

    for( int i=0; i<=5; i++){
        for( int j=0; j<=i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}
