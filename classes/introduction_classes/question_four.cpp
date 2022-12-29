// Write a program that computes the area of a right-angled triangle. using structures

#include <iostream>
#include <cmath>
using namespace std;

class triangle
{
private:
    float base;
    float height;
    float area;

public:
    void get_input();
    void calculate();
    void output();
};

int main()
{

    triangle tring1;

    tring1.get_input();

    tring1.calculate();

    tring1.output();



    return 0;
}
 void triangle::get_input()
 {
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >>height;

 }
 void triangle::calculate()
 {
    area = 1/2.0 * base * height;

 }
void triangle::output()
{
 cout << "The area of the triangle is: " << area << endl;
}
