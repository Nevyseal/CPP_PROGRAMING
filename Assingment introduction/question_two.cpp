#include<iostream>
using namespace std;
int main()
{

    double radius,area,circumfrence,PI=3.142857143;

    cout<<"Enter The Radius of the circle: ";
    cin>>radius;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    area = (radius*radius)*PI;
    circumfrence =(radius + radius)* PI;


    cout<<"\nThe Area of the circle is :"<<area<<"\n\nThe Circumfremce of the circle is :"<<circumfrence<<"\n\n\n";

    return 0;

}

