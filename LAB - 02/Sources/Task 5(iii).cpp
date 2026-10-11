
#include <iostream>
using namespace std;

int main() {
    double base, height, area;

    cout << "Enter the base and height of the triangle: ";
    cin >> base>>height;
    area = 0.5 * base * height;

    cout << "Area of triangle = " << area << endl;

    return 0;
}

