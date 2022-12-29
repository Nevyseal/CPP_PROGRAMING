#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char gender;
    double earning, tax, earningAfterTax, TaxedAmount;


    //********iNPUT****/////

    cout<<"Enter The Gender(M/F) :";
    cin>>gender;
    cout<<"\n\nEnter the Earning of the person:";
    cin>>earning;



    //******computation****//////

    switch(gender)
    {
    case 'F':
        if(earning < 15000)
        {
            tax = earning * 12.0 / 100;
            earningAfterTax = earning - tax;
            TaxedAmount = earning - earningAfterTax;

            system("cls");


            cout<<"\nYour Tax rate is 12%";
            cout<<"\nYour Tax is:"<<TaxedAmount<< endl;
        }

        else if(earning >= 15000)
        {

            tax = earning * 14.0 / 100;
            earningAfterTax = earning - tax;
            TaxedAmount = earning - earningAfterTax;

             system("cls");

            cout<<"\nYour Tax rate is 14%";
            cout<<"\nYour Tax is:"<<TaxedAmount<< endl;
        }
        cout<<"\nThe Earning after Taxation is:"<<earningAfterTax<< endl;
        break;

    case 'M':
        if(earning < 14000)
        {
            tax = earning * 13.0 / 100;
            earningAfterTax = earning - tax;
            TaxedAmount = earning - earningAfterTax;

             system("cls");

            cout<<"\nYour Tax rate is 13%";
            cout<<"\nYour Tax is:"<<TaxedAmount<< endl;
        }

        else if(earning >= 15000)
        {

            tax = earning * 15.0 / 100;
            earningAfterTax = earning - tax;
            TaxedAmount = earning - earningAfterTax;

             system("cls");

            cout<<"\nYour Tax rate is 15%";
            cout<<"\nYour Tax is:"<<TaxedAmount<< endl;
        }
        cout<<"\nThe Earning after Taxation is:"<<earningAfterTax<< endl;
        break;


    default :

         system("cls");

        cout<<"INVALID INPUT TRY AGAIN\n\n\n";






    }
}
