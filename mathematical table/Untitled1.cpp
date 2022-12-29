#include<iostream>
using namespace std;
int main()
{

    int  i = 1,number;

    cout<<"Enter a Number: ";
    cin>>number;



    do
    {


    cout<<number<<" * "<<i<<" = "<< number * i << endl;
    i++;



    }while(i <= 10);
}
