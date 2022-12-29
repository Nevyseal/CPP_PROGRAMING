#include<iostream>
using namespace std;
int main()
{

    double number;

    cout<<"Enter a Number: ";
    cin>>number;


    if(number < 0){
        cout<<"\nYour number "<<number<< " is a negative number.\n\n";
    }


    else if(number >= 0){
       cout<<"\nYour number "<<number<< " is a positive number.\n\n";
    }

    else{
        cout<<"INVALID NUMBER INPUT "<< endl;
}
}












