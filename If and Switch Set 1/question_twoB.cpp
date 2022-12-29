#include<iostream>
using namespace std;
int main ()
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

   switch(sign){

   case'+' :
    answer = number_one + number_two;
    cout<<number_one<< " + "<<number_two<< " = " <<answer<< "\n\n";
    break;


    case'-' :
    answer = number_one - number_two;
    cout<<number_one<< " - "<<number_two<< " = " <<answer<< "\n\n";
    break;


    case'*' :
    answer = number_one * number_two;
    cout<<number_one<< " * "<<number_two<< " = " <<answer<< "\n\n";
    break;


     case'/' :
    answer = number_one / number_two;
    cout<<number_one<< " / "<<number_two<< " = " <<answer<< "\n\n";
    break;

     default:
        cout<<"INVALID OPERATOR\n\n";





   }
   return 0;

}

