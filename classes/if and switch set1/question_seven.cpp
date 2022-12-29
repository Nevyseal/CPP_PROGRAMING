#include<iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class shape
{
private:
    int choice, base, height, radius;
    int perimeter, length, width;
    float area, hypotenus;
public:
    void get_input();
    void calculate();
    void output();

};

int main()
{
     shape sp_1;

     sp_1.get_input();
     sp_1.calculate();
     sp_1.output();


return 0;
}
void shape::get_input()
{
    cout<<"\n\t****The shapes you can calculate area and perimeter****\n\n";
    cout<<"\t1) Rectangle\n";
    cout<<"\t2) Circle\n";
    cout<<"\t3) Right Angled Trinagle\n";

    cout<<"\n\tPlease choose a figure from the options given: ";
    cin>>choice;
}
void shape::calculate()
{

    if (choice == 1)
    {
        // Rectangle

        cout<<"\n\tArea of Rectangle is Length * Width, and it's perimeter is (Length+Width)*2\n";

        cout<<"\n\tEnter the length of your rectangle: ";
        cin>>length;
        cout<<"\n\tEnter the width of your rectangle: ";
        cin>>width;

        area = length * width;
        perimeter = (length + width) * 2;

        system("cls");

}

    else if (choice == 2)
    {
        // Circle
        const float PI = 22.0 / 7;
        cout<<"\n\tArea of circle is PI*radius*radius(PI.r^2), and it's perimeter is PI*(radius*2) PI.d\n";

        cout<<"\n\tEnter the radius of your circle: ";
        cin>>radius;

        area = PI * radius * radius;
        perimeter = PI * (radius * 2);

        system("cls");
}
    else if (choice == 3)
    {
        // Right angled triangle

        cout<<"\n\tArea of right angled triangle is (1/2)*base*height, and it's perimeter is base+height+hypotenus\n";

        cout<<"\n\tEnter the base of the triangle: ";
        cin>>base;

        cout<<"\n\tEnter the height of the triangle: ";
        cin>>height;

        area = 1.0 / 2 * base * height;
        hypotenus = sqrt((base * base) + (height * height));
        perimeter = base + height + hypotenus;

        system("cls");
 }
    else
    {
        system("cls");
        cout<<"\n\tInvalid choice!\n";
        cout<<"\n\t";
    }


}
void shape::output()
{
    cout<<"\n\tThe Area of the figuer is :"<<area;
    cout<<"\n\tThe Perimeter of the figuer is :"<<perimeter;
    cout<<"\n\t";

}

