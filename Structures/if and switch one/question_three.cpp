#include <iostream>
using namespace std;

struct Employee
{
    float grossPay, tax, netpay;
};

int main()
{
    struct Employee person_1;

    cout<<("\tPlease enter your gross pay : ");
    cin>>person_1.grossPay;

    if (person_1.grossPay > 40000)
    {
        person_1.tax = person_1.grossPay * 30.0 / 100;
    }
    else if ((person_1.grossPay >= 30000) && (person_1.grossPay < 40000))
    {
        person_1.tax = person_1.grossPay * 25.0 / 100;
    }
    else if ((person_1.grossPay >= 20000) && (person_1.grossPay < 30000))
    {
        person_1.tax = person_1.grossPay * 15.0 / 100;
    }
    else if ((person_1.grossPay >= 10000) && (person_1.grossPay < 20000))
    {
        person_1.tax = person_1.grossPay * 10.0 / 100;
    }
    else if (person_1.grossPay < 10000)
    {
        person_1.tax = 0;
    }

    person_1.netpay = person_1.grossPay - person_1.tax;

    cout<<"\n\tGross pay: "<<person_1.grossPay
        <<"\n\tTax Pay: "<<person_1.tax
        <<"\n\tNet Pay is: "<<person_1.netpay
        <<"\n\n";

    return 0;
}
