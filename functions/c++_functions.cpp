#include<iostream>
using namespace std;

// function prototype ////
float area_circumference_of_circle(float rad);
float area_perimeter_of_rectangle(float leng,float wid);

int main()
{
    int choice;

   float radius,length,width;

    cout<<"\n\tThe shapes you can calculate area and perimeter";
    cout<<"\n\t-----------------------------------------------";
    cout<<"\n\t1) Rectangle\n\t2) Circle";
    cout<<"\n\tPlease choose a figure (1 or 2): ";
    cin>>choice;

    switch(choice)
    {

 case 1:
    cout<<"\n\nEnter the length and Width of the Rectangle :";
    cin>>length>>width;
    area_perimeter_of_rectangle(length,width);
    break;


 case 2:
     cout<<"\n\nEnter The Radius of the Circle :";
     cin>>radius;
     area_circumference_of_circle(radius);
     break;

      default:
    cout<<"\n\nINVALID INPUT\n\n";


    }

    return 0;
}



float area_perimeter_of_rectangle(float leng,float wid)
{
    float area = leng * wid;
    float perimeter = (leng + wid) * 2;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout<<"\n\tFigure: Rectangle\n";
    cout<<"\tLength: "<<leng<<" Width: "<<wid<<" \n\tArea: "<<area<<" Perimeter: "<<perimeter<<" \n\n";


}

float area_circumference_of_circle(float rad)
{
   float area = 22/7.0 * (rad * rad);
   float circumfrence = 22/7.0 * (rad + rad);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout<<"\n\tFigure: Circle\n";
    cout<<"\tRadius:"<<rad<<" \n\tArea:" <<area<< " circumference:"<<circumfrence<<" \n";




}



