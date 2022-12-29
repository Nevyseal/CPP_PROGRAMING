#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
    float radius;
    float area;
    float circumference;

public:
    void get_data();
    void compute();
    void display_data();
};

int main()
{
    Circle circ1;

    circ1.get_data();

    circ1.compute();

    circ1.display_data();

    return 0;
}
void Circle::get_data()
{
    cout << "Enter the radius of the circle: ";
    cin >>radius;
}
void Circle::compute()
{
    area = 22/7.0 * pow(radius, 2);
    circumference = 2 * 22/7.0 * radius;
}
void Circle::display_data()
{
    cout << "\n\tThe area of the circle is: " <<area;
    cout << "\n\tThe circumference of the circle is: " <<circumference << "\n\n";
}
