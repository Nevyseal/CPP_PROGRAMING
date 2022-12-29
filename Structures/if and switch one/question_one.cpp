#include <iostream>
using namespace std;
struct Beer_Brand
{
    int number_of_bottles;
    double total_cost;
};
int main()
{
    struct Beer_Brand beer;
    int choice;

    //Display the menu
    cout<<"\n\t ****Jamal and DaughtersPub****\n\n";
    cout<<"\tBeer Brand \t\tPrice\n";
    cout<<"\t 1)Tusker\t\t100/=\n";
    cout<<"\t 2)Pilsner\t\t120/=\n";
    cout<<"\t 3)Smirnoff Ice\t\t140/=\n";
    cout<<"\t 4)White Cap\t\t90/=\n\n";

    //Accept the input

    cout<<"\tEnter your choice: ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"\n\tHow many bottles of Tusker do you want? ";
        cin>>b_1.amount;

        cout<<" The bottles of Tusker will cost you Kshs :"<< b_1.amount * 100;
        break;
    case 2:
        cout<<("\n\tHow many bottles of Pilsner do you want? ");
        cin>>b_1.amount;
        cout<<" The bottles of Plisner will cost you Kshs :"<< b_1.amount * 120;
        break;
    case 3:
        cout<<("\n\tHow many bottles of Smirnoff Ice do you want? ");
        cin>>b_1.amount;
        cout<<" The bottles of Smirnoff will cost you Kshs :"<< b_1.amount * 140;
        break;
    case 4:
        cout<<("\n\tHow many bottles of White Cup do you want? ");
        cin>>b_1.amount;
        cout<<" The bottles of White cup will cost you Kshs :"<< b_1.amount * 90;
        break;
    default:
        cout<<"\n\tInvalid input!\n";
    }
}
