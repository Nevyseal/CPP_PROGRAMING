#include <iostream>
#include <cmath>
using namespace std;

struct Rectangle
{
    float width, length, area, perimeter;
};

int main()
{
    Rectangle rect1;

    cout << "Enter the width of the rectangle: ";
    cin >> rect1.width;
    cout << "Enter the length of the rectangle: ";
    cin >> rect1.length;

    rect1.area = rect1.width * rect1.length;
    rect1.perimeter = 2 * (rect1.width + rect1.length);

    cout << "\n\nThe area of the rectangle is " << rect1.area;
    cout << "\nThe perimeter of the rectangle is " << rect1.perimeter;

    return 0;
}
