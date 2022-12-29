#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{

   cout<<"\n\t****The shapes you can calculate area and perimeter*****\n\n";
   cout<<"\t1)Rectangle";
   cout<<"\t2)Circle";
   cout<<"\t3)Right Angled Triangle";

   int choice;

   cout<<"\t\n\nChoose A Figure From the Options given :";
   cin>>choice;


   double area,perimeter;

   if(choice == 1)
   {
       double length,width;
       cout<<"\n\nEnter The length Of your Rectangle:";
       cin>>length;
       cout<<"\n\nEnter The width of your Rectangle:";
       cin>>width;

       area = length * width;
       perimeter = (length + width)* 2;

       system("cls");  ///////********Clear the screen********/////////

       cout<<"\nThe Area  of the Rectangle is:"<<area<<"\n\n";
       cout<<"\nThe Perimeter Of the Rectangle is: "<<perimeter<<"\n\n\n";



   }else if(choice == 2)
   {

       const double PI = 22.0/7;
       double radius;

       cout<<"\n\nEnter The Radius Of the Circle: ";
       cin>>radius;

       area = PI * radius * radius;
       perimeter = PI * (radius * 2);


        system("cls");  ///////********Clear the screen********/////////



       cout<<"\nThe Area  of the Circle is:"<<area<<"\n\n";
       cout<<"\nThe Perimeter Of the Circle is: "<<perimeter<<"\n\n\n";




   }else if(choice ==3)
   {
       double base;
       double height;
       double hypotenus;


       cout<<"\n\nEnter The Base Of the Triangle: ";
       cin>>base;
       cout<<"\n\nEnter The Height of the Triangle: ";
       cin>>height;

       area = 1.0 / 2.0 * base * height;
       hypotenus = sqrt((base*base)+ (height * height));
       perimeter = base + height + hypotenus;


       system("cls");  ///////********Clear the screen********/////////


       cout<<"\n\nThe Area  of the Triangle is:"<<area<<"\n\n";
       cout<<"\n\nThe Perimeter Of the Triangle is: "<<perimeter<<"\n\n\n";






   }


}
