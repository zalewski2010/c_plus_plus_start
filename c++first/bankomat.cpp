#include <iostream>

using namespace std;

string PIN;


int main()
{
    cout << "Witaj w naszym banku" << endl;
    cout << "Podaj numer PIN:";
    cin >> PIN;
    cout <<endl<< "Wpisałeś PIN = " << PIN <<endl;
    
    if (PIN == "0123")
    {
        cout<< "Poprawny PIN. System is activate"<<endl;
    }
    else {
        cout << "Zły PIN. Pierwsza próba. Wpisz poprawny PIN" <<endl;
    }
    return 0;
}