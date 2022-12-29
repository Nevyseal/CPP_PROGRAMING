#include<iostream>
using namespace std;
int main()
{
    double width,length,area,perimeter;

    cout<<"Enter the Width and the Length  of the Rectangle :\n ";
    cin>>width;
    cin>>length;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    area = width*length;
    perimeter = (width+ length)*2;

    cout<<"\n\nThe Area of the Rectangle is :"<<area<<"\n\nThe perimeter of the Rectangle is :"<<perimeter<<endl;

    return 0;
}
