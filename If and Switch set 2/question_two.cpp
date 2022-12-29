#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double salary;
    double Tax_amaount, Net_salary;



    cout<<"Enter Salary Amount:";
    cin>>salary;



    if(salary >= 20000)
    {
        Tax_amaount = salary * (15.0 / 100);
        Net_salary = salary - Tax_amaount;

        system("cls");


        cout<<"\n\nYour Tax Amount is:"<<Tax_amaount<< endl ;
        cout<<"\n\nYour Net Salary is:"<<Net_salary<< endl;

    }else if(salary > 10000 && salary < 20000)
    {
        Tax_amaount = salary * (10.0 / 100);
        Net_salary = salary - Tax_amaount;

         system("cls");


        cout<<"\n\nYour Tax Amount is:"<<Tax_amaount<< endl ;
        cout<<"\n\nYour Net Salary is:"<<Net_salary<< endl;

    }else
    {

         system("cls");
        cout<<"\n\nYou are not Taxes";
        cout<<"\n\nYour salary is :"<<salary<< endl;

    }
    return 0;


}
