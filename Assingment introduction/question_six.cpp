#include<iostream>
using namespace std;
int main()
{

   double temp,conversion;

    cout<<"Enter The Temprature in degress Celsius :";
    cin>>temp;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);


    conversion = (temp * 1.8) + 32;

    cout<<"\n in Fahrenheit is :"<<conversion<<"\n\n";

    return 0;
}

