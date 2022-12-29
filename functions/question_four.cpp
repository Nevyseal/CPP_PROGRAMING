#include<iostream>
using namespace std;

int even(int number);

int main()
{

    int number,eve;

    cout<<"Enter a number: ";
    cin>>number;


    eve = even(number);

}
int even(int number)
{
    int even;

    even = number % 2;

    if(even == 0)
        cout<<"\n\t1\n\n";
    else
        cout<<"\n\t0\n\n";


}
