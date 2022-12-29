#include<iostream>
using namespace std;

double area_circle(double radii);
double circumrence_circle(double radii);
const  double PI = 3.142857142857143;
int main()
{
    double radius,are,circum;

    cout<<"Enter The Radius of the circle:";
    cin>>radius;

    are = area_circle(radius);

    circum = circumrence_circle(radius);

    cout<<"\n\tThe area of the circle is :"<<are;

    cout<<"\n\tThe Circumfrence O f the circle is :"<<circum;

    cout<<"\n\n\n";

}
double area_circle(double radii)
{
    double area;

    area = PI * radii * radii;
    return area;
}
double circumrence_circle(double radii)
{
    double circumfrence;

    circumfrence = PI * (radii + radii);
    return circumfrence;
}
