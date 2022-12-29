#include<iostream>
using namespace std;

/* Function prototype */
double rect_perimeter(double width, double length);
double rect_area(double width, double length);
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
double rect_area(double width, double length) /*Function header / heading */
{
	double area;
	area = width * length;	// Function body & function definition
	return area;
}
double rect_perimeter(double width, double length)
{
    double perimeter;

    perimeter  = (width + length)* 2;
    return perimeter;
}
