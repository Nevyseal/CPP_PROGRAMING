#include<iostream>
using namespace std;
int main()
{
    double area,height,base;

    cout<<"Enter The Height and base of the Right angle Triangle : ";
    cin>>height;
    cin>>base;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    area = 0.5 *base*height;

    cout<<"The Area of the Right Angle Triangle is :"<<area<< "\n\n";

    return 0;

}
