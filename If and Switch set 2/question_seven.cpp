#include<iostream>
using namespace std;
int main()
{

    int number;

    cout<<"Enter An Integer :";
    cin>>number;


    if(number < 0)
        cout<<"\n\n"<<number<<" is a negative number\n\n";

    else if(number == 0)
        cout<<number<<" is a zero";

    else if(number > 0)
        cout<<"\n\n"<<number<<" is a positive number\n\n";

    return 0;
}
