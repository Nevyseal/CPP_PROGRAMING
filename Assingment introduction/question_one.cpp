#include<iostream>
using namespace std;
int main()
{
double a,b,c,sum,prod,avg;

cout<<"Enter the three numbers: \n" ;
cin>>a;
cin>>b;
cin>>c;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

sum=a+b+c;
prod=a*b*c;
avg=sum/3;

cout<<"The sum is: " <<sum << "\nThe Product is: "<<prod << "\nThe average is :"<<avg<<"\n\n";

return 0;



}


