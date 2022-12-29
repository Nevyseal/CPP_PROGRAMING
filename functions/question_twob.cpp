#include<iostream>
using namespace std;

float get_grade(double mark1 ,double mark2, double mark3);

int main()
{
    double mark1, mark2, mark3,average;

    cout<<"Enter The marks for three subjects: ";
    cin>>mark1>>mark2>>mark3;


    average = get_grade(mark1,mark2,mark3);

    cout<<"The Average Mark is: "<<average;

     if(average >= 0    &&  average <= 50)
        cout<<"\nE";
    else if(average >= 50    &&  average <= 60)
        cout<<"\nD";
    else if(average >= 60    &&  average <= 70)
        cout<<"\nc";
        else if(average >= 70    &&  average <= 80)
        cout<<"\nB";
        else if(average >= 80    &&  average <= 100)
        cout<<"\nA";



}
float get_grade(double mark1 ,double mark2, double mark3)
{
    float ave;

    ave = (mark1 + mark2 + mark3) / 3;
    return ave;

}
