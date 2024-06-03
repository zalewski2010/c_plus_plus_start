#include <iostream>

using namespace std;

int uczniowie, cukierki, x, y;

int main()
{
    cout << "Ilu uczniów jest w Twojej klasie ? :" ;
    cin >> uczniowie;

    cout << "Ile cukierków kupiła mama? :";
    cin >> cukierki;

    x = cukierki / (uczniowie - 1);
    cout<< "Dla każdego ucznia przypada cukierków: "<<x;

    y = cukierki - x * (uczniowie - 1) ;
    cout<< endl<< "Dla Jasia zostało na wieczór cukierków : " <<y ;
    return 0;
}