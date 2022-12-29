`   #include <iostream>
#include <cmath>
using namespace std;

struct circle
{
    float radius;
    float area;
    float circumference;
};

int main()
{
    circle c;
    cout << "Enter the radius of the circle: ";
    cin >> c.radius;
    c.area = 3.14 * pow(c.radius, 2);
    c.circumference = 2 * 3.14 * c.radius;
    cout << "The area of the circle is: " << c.area << endl;
    cout << "The circumference of the circle is: " << c.circumference << endl;
    return 0;
}
