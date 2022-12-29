#include<iostream>
using namespace std;

float get_grade(double mark1 ,double mark2, double mark3);

int main()
{
    double mark1, mark2, mark3,average;

    cout<<"Enter The marks for three subjects: ";
    cin>>mark1>>mark2>>mark3;


    average = get_grade(mark1,mark2,mark3);


}
float get_grade(double mark1 ,double mark2, double mark3)
{
    float ave;

    ave = (mark1 + mark2 + mark3) / 3;

    if(ave >= 0    &&  ave <= 50)
        cout<<"E";
    else if(ave >= 50    &&  ave <= 60)
        cout<<"D";
    else if(ave >= 60    &&  ave <= 70)
        cout<<"c";
        else if(ave >= 70    &&  ave <= 80)
        cout<<"B";
        else if(ave >= 80    &&  ave <= 100)
        cout<<"A";
}
