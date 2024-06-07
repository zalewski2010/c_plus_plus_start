# include <iostream>

using namespace std;

int wiek;


int main()
{
    cout << "Ile masz lat? : " <<endl;
    cin >> wiek;

    if (wiek < 18)
    {
    cout << "Nie jesteś pełnoletni. Nie możesz pić ani głosować!";
    }
    else if ((wiek >= 18) && (wiek < 35))
    {
        cout << "Jesteś pełnoletni. Możesz pić,głosować, ale nie możesz zostać prezydentem!";
    }
    else
    {
        cout << "Możesz kandydować na prezydenta bo masz minimum 35 lat!!";
    }
    return 0;
}