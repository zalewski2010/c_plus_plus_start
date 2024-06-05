#include <iostream>

using namespace std;

string PIN;
string wrongPIN;

int main()
{
    cout << "Witaj w naszym banku" << endl;
    cout << "Podaj numer PIN:";
    cin >> PIN;
    cout <<endl<< "Twój PIN to: " << PIN <<endl;
    
    if (PIN == "0123")
    {
        cout<< "Poprawny PIN. System is activate"<<endl;
    }
    else cout << "Zły PIN. Wpisz poprawny PIN" <<endl;
    
    return 0;
}