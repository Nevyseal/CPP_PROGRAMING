#include<iostream>
using namespace std;
int main()
{
   double grosspay;

   // Input


   cout<<"Enter Your Gross Pay: ";
   cin>>grosspay;

   //caculation

   double tax,netpay;


   if(grosspay > 40000)
   {
       tax = grosspay * 30.0/100;
       netpay = grosspay - tax;
       cout<<"\n\nYour Net Tax is:"<<tax<< endl;
       cout<<"\n\nYour Net Income is: "<<netpay<< endl;
   }


   else if(grosspay >= 30000 && grosspay < 40000)
  {

       tax = grosspay * 25.0/100;
       netpay = grosspay - tax;
       cout<<"\n\nYour Net Tax is:"<<tax<< endl;
       cout<<"\n\nYour Net Income is: "<<netpay<< endl;
   }

   else if(grosspay >= 20000 && grosspay < 30000)
  {

       tax = grosspay * 15.0/100;
       netpay = grosspay - tax;
       cout<<"\n\nYour Net Tax is:"<<tax<< endl;
       cout<<"\n\nYour Net Income is: "<<netpay<< endl;
   }

    else if(grosspay >= 10000 && grosspay < 20000)
  {

       tax = grosspay * 10.0/100;
       netpay = grosspay - tax;
       cout<<"\n\nYour Net Tax is:"<<tax<< endl;
       cout<<"\n\nYour Net Income is: "<<netpay<< endl;
   }

    else if(grosspay < 10000)
  {

       tax = 0;
       netpay = grosspay - tax;
       cout<<"\n\nYour Net Tax is:"<<tax<< endl;
       cout<<"\n\nYour Net Income is: "<<netpay<< endl;
   }

   return 0;










}

