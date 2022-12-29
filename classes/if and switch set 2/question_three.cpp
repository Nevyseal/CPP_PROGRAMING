#include<iostream>
using namespace std;

class employee
{
private:
    char gender;
    double earning, tax, earningAfterTax, taxedAmount;
public:
    void get_input();
    void calculate_output();
};
int main()
{
    employee employ_1;

    employ_1.get_input();
    employ_1.calculate_output();


}
 void employee::get_input()
 {
    cout<<"Enter the gender(m/f): ";
    cin>>gender;
    cout<<"\nEnter the earning OF the person: ";
    cin>>earning;

 }
void employee::calculate_output()
{

   switch (gender)
    {
    case 'f':
        if (earning < 15000)
        {
            tax = earning * (12.0 / 100);
            earningAfterTax = earning - tax;
            taxedAmount = earning - earningAfterTax;
            cout<<"\n\tYour Tax rate is 12%%.\n\tYour Tax is :"<<taxedAmount;
        }
        else if (earning >= 15000)
        {
            tax = earning * (14.0 / 100);
            earningAfterTax = earning - tax;
            taxedAmount = earning - earningAfterTax;
            cout<<"\n\tYour Tax rate is 14%.\n\tYour Tax is :"<<taxedAmount;
        }
        cout<<"\n\tThe earning after taxation is : "<<earningAfterTax;
        break;

    case 'm':
        if (earning < 14000)
        {
            tax = earning * (13.0 / 100);
            earningAfterTax = earning - tax;
            taxedAmount = earning - earningAfterTax;
            cout<<"\n\tYour Tax rate is 13%.\n\tYour Tax is:"<<taxedAmount;
        }
        else if (earning >= 15000)
        {
            tax = earning * 0.15;
            earningAfterTax = earning - tax;
            taxedAmount = earning - earningAfterTax;
            cout<<"\n\tYour Tax rate is 15% .\n\tYour Tax is:"<<taxedAmount;
        }
        cout<<"\n\tThe earning after taxation is :"<<earningAfterTax;
        break;

    default:
        cout<<"\n\n\tINVALID INPUT TRY AGAIN!\n";
    }
}
