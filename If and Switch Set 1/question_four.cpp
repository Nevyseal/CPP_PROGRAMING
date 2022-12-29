#include<iostream>
using namespace std;
int main()
{
    double number1;
    double number2;
    double result;


    cout<<"Enter the First Number: ";
    cin>>number1;
    cout<<"\n\nEnter the Second Number: ";
    cin>>number2;


    if(number1 > number2)
        {
        result = number1 - number2;
        cout<<"\n\nThe Computation is: "<<result<< endl;
        }

    else if(number2 > number1)
    {
        result = number2 / number1;
        cout<<"\n\nThe Computation is: "<<result<< endl;
    }

    else if(number1 == number2)
    {
        result = number1 + number2;
         cout<<"\n\nThe Computation is: "<<result<< endl;
    }
    else{
        cout<<"INVALID iNPUT ";
    }
    return 0;




}
