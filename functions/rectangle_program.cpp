#include<iostream>
using namespace std;
#include<rectangle.h>
int main()
{
	double ar,wid,leng,peri;

	cout<<"Enter the width and length of the rectangle: ";
	cin>>wid>>leng;

	peri = rect_perimeter(wid,leng);

	ar = rect_area(wid,leng); /*Function call */

	cout<<"\nThe area of the rectangle is "<<ar<<"\n\n";
	cout<<"\nThe perimeter of the rectangle is "<<peri<<"\n\n";
	return 0;
}

