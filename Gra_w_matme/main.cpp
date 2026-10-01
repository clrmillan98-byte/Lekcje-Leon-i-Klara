#include <iostream>
#include <cstdlib> // biblioteka potrzebna do m.in. fukcji rand()
#include <time.h>

using namespace std;

/***
    Naszym Celem jest napisanie prostej aplikacji, która pomoże nam w nauce działań matematycznych

    Etap 0: To co mamy teraz w programie :D
    Etap 1: Dodanie losowania liczb
    Etap 2: Dodanie pętli, aby nie trzeba było uruchamiać programu by spróbować ponownie
    Etap 3: Dodanie punktow za poprawne odpowiedzi, i bonus za szybką odpowiedz (10 punktów za poprawną odpowiedź i 10 punktów dodatkowo za odpoweidź w mniej niż 5 sekund)
    Etap 4: Dodanie limitu prób (3 życia na lekcje i odjęcie -5 punktów za błąd)
    Etap 5: Dodanie pliku z zapisami wyników :D

    Podczas pisania tego programu
    - poznasz funkcję rand()
    - liczenie czasu
    - pisanie do pliku

    rand() - generuje liczbę losową z przecdziału < 0; RAND_MAX >
    srand(time(NULL)); // przypięcie do generatora liczb pseudolosowych zegara systemowego, dzięki temu liczba pseudo-losowa jest inna za każdym razem
    rand() % ILE_LICZB + STARTOWA_LICZBA


***/

int main()
{

    int a=6, b=8; //czynniki mnożenia
    int wynik; // wypisywany przez usera wyniki


    cout << "Gra w matematykę? Czemu nie" << endl << "Ile to jest... " << endl;
    cout << a << "*" << b << "=?   odpowiedz:";

    cin >> wynik;

    if( a*b == wynik ){
        cout << "TAAAAAAAK, Dobrze ;D" << endl;
    }
    else
    {
        cout << "Niestety nie ;( Nie poddawaj sie i sproboj jeszcze raz!"  << endl;
    }

    return 0;
}
