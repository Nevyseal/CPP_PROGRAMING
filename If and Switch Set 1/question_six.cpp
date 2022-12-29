#include<iostream>
using namespace std;
int main()
{
    int firstnumber;
    int secondnumber;


    cout<<"Enter The First Number : ";
    cin>>firstnumber;
    cout<<"\nEnter The Second Number : ";
    cin>>secondnumber;


    double results;

    if(firstnumber > secondnumber)
    {

        if(secondnumber == 0){
            cout<<"\nSorry you cannot divide a number by Zero\n\n";
        }

    results = firstnumber / secondnumber;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
        cout<<"\nThe result is: "<<results<< endl;




    }else if(secondnumber > firstnumber){


        if(firstnumber == 0){
            cout<<"\nSorry you cannot divide a number by Zero\n\n";

        }

    results = secondnumber / firstnumber;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"\n\nThe result is: "<<results<< endl;

    }



    return 0;



}
