
#include <iostream>
using namespace std;

int main() {
    double length, width, area;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length>>width;

    area = length*width;

    cout << "Area of rectangle = " << area << endl;

    return 0;
}

