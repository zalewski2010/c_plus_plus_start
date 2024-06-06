#include <iostream>

using namespace std;

string login, haslo;

int main()
{
    cout<< "Podaj login: ";
    cin>> login;
    cout<< "Podaj hasło: ";
    cin>> haslo;

    if ((login == "admin") && (haslo == "lotka")) 
    {
        cout<< "Udało się zalogować!";
    }

    return 0;
}