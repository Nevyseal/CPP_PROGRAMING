#include<iostream>
using namespace std;
int main()
{
    double weight,conversion,packages;

    cout<<"Enter the weight of package in grams: ";
    cin>>weight;

    conversion = weight/1000;

    packages = 1000/weight;

    cout<<"\nThe weight of the packages is: "<<conversion<<"kilograms\n";
    cout<<"\n\It takes "<<packages<<" such packages to from one kilogram\n\n";

    return 0;


}
