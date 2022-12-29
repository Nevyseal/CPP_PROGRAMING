#include <iostream>
using namespace std;

class Employee
{
private:
    float grossPay, tax, netpay;

public:
    void get_input();
    void calculate();
    void output();
};

int main()
{
    Employee person_1;

    person_1.get_input();

    person_1.calculate();

    person_1.output();


    return 0;
}
void Employee::get_input()
{
    cout<<"\tPlease enter your gross pay : ";
    cin>>grossPay;

}
void Employee::calculate()
{
    if (grossPay > 40000)
    {
        tax = grossPay * 30.0 / 100;
    }
    else if ((grossPay >= 30000) && (grossPay < 40000))
    {
        tax = grossPay * 25.0 / 100;
    }
    else if ((grossPay >= 20000) && (grossPay < 30000))
    {
        tax = grossPay * 15.0 / 100;
    }
    else if ((grossPay >= 10000) && (grossPay < 20000))
    {
        tax = grossPay * 10.0 / 100;
    }
    else if (grossPay < 10000)
    {
        tax = 0;
    }

    netpay =grossPay - tax;
}
void Employee::output()
{
    cout<<"\n\tGross pay: "<<grossPay
        <<"\n\tTax Pay: "<<tax
        <<"\n\tNet Pay is: "<<netpay
        <<"\n\n";
}

