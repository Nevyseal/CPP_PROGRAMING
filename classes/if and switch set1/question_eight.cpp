#include<iostream>
#include <stdlib.h>
using namespace std;

class fines
{
private:
    double Speed, Limit, Exceeded, fine;


public:
    void get_input();
    void calculate();
    void output();
};

int main()
{
    fines person_1;

    person_1.get_input();
    person_1.calculate();
    person_1.output();


    return 0;
}
void fines::get_input()
{
    cout<<"\n\tEnter the vehicle speed: ";
    cin>>Speed;

    cout<<("\n\tEnter the speed limit: ");
    cin>>Limit;

}
 void fines::calculate()
 {
     Exceeded = Speed - Limit;

    if ((Exceeded > 0) && (Exceeded < 30))
{
    fine = 2500;
}
    else if((Exceeded > 30))
{
    fine = 4000;

}
else
{
    fine = 0;
}

}
 void fines::output()
{
    system("cls");
    cout<<"\n\tVehicle Speed:"<<Speed;
    cout<<"\n\tSpeed limit:"<<Limit;
    cout<<"\n\tFine Levied :"<<fine;
    cout<<"\n\n\n";
 }
