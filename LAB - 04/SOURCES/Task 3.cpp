#include <iostream>
using namespace std;

int main()
{
    int mark;

    cout << "Enter marks: ";
    cin >> mark;

    if (mark >= 75)
        cout << "Grade A";
    else if (mark >= 60)
        cout << "Grade B";
    else if (mark >= 45)
        cout << "Grade C";
    else
        cout << "Grade D";

    return 0;
}
