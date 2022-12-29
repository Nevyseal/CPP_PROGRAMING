#include<iostream>
using namespace std;
int main()
{

    int number = 0, square = 0, sum = 0;

    for(number < 0;number <= 15; number++)
    {

        square = number * number;
        sum = sum + square;


    }
    cout<<"The Sum of the Sqaure of  the First 15 positive Integer : "<<sum;

    cout<<"\n\n";
}
