#include<iostream>
using namespace std;
int main()
{
    double speed, limit, exceeded, fine;

    cout<<"\n\tEnter The Vehicle Speed: ";
    cin>>speed;

    cout<<"\n\tEnter The Speed Limit: ";
    cin>>limit;


    exceeded = speed - limit ;


    if((exceeded > 0 ) && (exceeded < 30 ))
    {
        fine = 2500;
        system("cls");
        cout<<"\n\tThe Vehicle Speed: "<<speed<<endl;
        cout<<"\n\tThe Speed limit :"<<limit<< endl;
        cout<<"\n\tThe Excess Speed: "<<exceeded<<endl;
        cout<<"\n\tThe Fine Levied:"<<fine<<endl;

    }else if(exceeded > 30)
    {
        fine = 4000;
        system("cls");
        cout<<"\n\tThe Vehicle Speed: "<<speed<<endl;
        cout<<"\n\tThe Speed limit :"<<limit<< endl;
        cout<<"\n\tThe Excess Speed: "<<exceeded<<endl;
        cout<<"\n\tThe Fine Levied:"<<fine<<endl;


    } else if(exceeded <= 0)
    {
        fine = 0;
        system("cls");
        cout<<"\n\tThe Vehicle Speed: "<<speed<<endl;
        cout<<"\n\tThe Speed limit :"<<limit<< endl;
        cout<<"\n\tThe Excess Speed: "<<exceeded<<endl;
        cout<<"\n\tThe Fine Levied:"<<fine<<endl;
    }

}

