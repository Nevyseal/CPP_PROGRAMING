#include<iostream>
using namespace std;

struct Rectangle
{
    double area, perimeter,length, width;

};

int main()
{
   Rectangle figuer_1;

   cout<<"\n\tEnter The Length of the Rectangle :";
   cin>>figuer_1.length;
   cout<<"\n\tEnter The Width of the Rectangle:";
   cin>>figuer_1.width;


   figuer_1.area = figuer_1.length * figuer_1.width;
   figuer_1.perimeter = (figuer_1.length + figuer_1.width) * 2;


   system("cls");


   cout<<"\n\tThe Area of the rectangle is :"<<figuer_1.area;
   cout<<"\n\tThe perimeter of the rectangle is :"<<figuer_1.perimeter;

   cout<<"\n\n\n";
}
