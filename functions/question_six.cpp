#include<iostream>
using namespace std;

double calc_vol( double height, double length, double width);

int main()
{
    double heigh, leng, wid, vol;

    cout<<"\n\tEnter The Height :";
    cin>>heigh;
    cout<<"\n\tEnter The Length :";
    cin>>leng;
    cout<<"\n\tEnter The Width :";
    cin>>wid;

    system("cls");


    vol = calc_vol(heigh,leng,wid);



}

double calc_vol( double height, double length, double width)
{
    double volume;

    volume = height * length * width;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);


    cout<<"\n\tDimesion of the cube are :";
    cout<<"---------------------------------------------------------------\n";
    cout<<"\n\tHeight :"<<height;
    cout<<"\n\tLength :"<<length;
    cout<<"\n\twidth :"<<width;

    cout<<"\n\n";

    cout<<"\n\tThe volume of the cube is :"<<volume;

    cout<<"\n\n\n";







}
