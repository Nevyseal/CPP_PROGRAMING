#include<iostream>
using namespace std;

double calc_tax(double gross_pay);

int main()
{
    double gros_pay, netpay;

    cout<<"\n\tEnter The Gross pay :";
    cin>>gros_pay;


    netpay = calc_tax(gros_pay);





}

double calc_tax(double gross_pay)
{

    double tax_amount, net_pay;


    if(gross_pay > 50000)
    {


        tax_amount = gross_pay * 35.0/100.0;
        net_pay = gross_pay - tax_amount;

           system("cls");

        cout<<"\n\tThe Tax amount is :"<<tax_amount;
        cout<<"\n\tThe Net Pay is :"<<net_pay;


    }else if(gross_pay >= 40000  &&  gross_pay <= 50000)
    {
        tax_amount = gross_pay * 30.0/100.0;
        net_pay = gross_pay - tax_amount;

           system("cls");

        cout<<"\n\tThe Tax amount is :"<<tax_amount;
        cout<<"\n\tThe Net Pay is :"<<net_pay;


    }else if(gross_pay >= 20000  &&  gross_pay <= 40000)
    {
        tax_amount = gross_pay * 30.0/100.0;
        net_pay = gross_pay - tax_amount;

           system("cls");

        cout<<"\n\tThe Tax amount is :"<<tax_amount;
        cout<<"\n\tThe Net Pay is :"<<net_pay;


    }else if(gross_pay >= 12000  &&  gross_pay <= 20000)
    {
        tax_amount = gross_pay * 30.0/100.0;
        net_pay = gross_pay - tax_amount;

           system("cls");

        cout<<"\n\tThe Tax amount is :"<<tax_amount;
        cout<<"\n\tThe Net Pay is :"<<net_pay;


    }else if(gross_pay < 12000   &&  gross_pay  != 0)
    {

        tax_amount = gross_pay * 0;

        net_pay = gross_pay - tax_amount;

        system("cls");

        cout<<"\n\tThe tax Amount is :"<<tax_amount;
        cout<<"\n\tThe Net Pay is :"<<net_pay;


    }else

    cout<<"\n\t!!!!!!!!!!!!!!!INVALID INPUT !!!!!!!!!!!!";



    cout<<"\n\n\n";


}
