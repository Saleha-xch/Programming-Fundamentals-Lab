#include <iostream>
using namespace std;

int main()
{
    char small, capital;

    cout << "Enter small alphabet: ";
    cin >> small;

    capital = small - 32;

    cout << "Upper case = " << capital << endl;

    return 0;
}
