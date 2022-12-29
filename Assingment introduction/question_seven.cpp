#include<iostream>
using namespace std;
int main()
{
    double distance,time,speed,x,y;


    cout<<"Enter the distance in Meters : ";
    cin>>x;
    cout<<"\nEnter the time taken in minutes :";
    cin>>y;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    distance =x/1000;
    time = y/60;
    speed = distance/time;

    cout<<"\nThe speed is: "<<speed <<"Km/h"<< endl;

return 0;
}
