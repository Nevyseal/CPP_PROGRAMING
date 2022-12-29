#include<iostream>
using namespace std;
int main()
{
    int square = 0,sum = 0 ,number = 0;


    while(number <= 15)
    {

        square = number * number ;
        sum = sum + square;

        number++;
    }

    cout<<"The Sum of the square of the  15 Positive Intagers is :"<<sum;

    cout<<"\n\n";


}
