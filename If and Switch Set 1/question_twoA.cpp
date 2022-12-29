#include<iostream>
using namespace std;
int main()
{
   char sign;
   double number_one,number_two,answer;

   //Input


   cout<<"Enter the Operator : " ;
   cin>>sign;

   cout<<"\n\nEnter Two numbers :";
   cin>>number_one;
   cin>>number_two;

   //computation



   if(sign == '+')
   {

    answer = number_one + number_two;
    cout<<number_one<< " + "<<number_two<< " = " <<answer<< "\n\n";
   }


   else if(sign == '-')
   {

    answer = number_one - number_two;
    cout<<number_one<< " - "<<number_two<< " = " <<answer<< "\n\n";
   }

   else if(sign == '*')
   {

    answer = number_one * number_two;
    cout<<number_one<< " * "<<number_two<< " = " <<answer<< "\n\n";
   }

    else if(sign == '/')
   {

    answer = number_one / number_two;
    cout<<number_one<< " * "<<number_two<< " = " <<answer<< "\n\n";
   }else
   cout<<"INVALID OPERATOR" ;

   return 0;



}

