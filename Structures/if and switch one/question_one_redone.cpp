#include <iostream>
using namespace std;
struct Beer_Brand
{
    int number_of_bottles;
    double total_cost;
};
int main()
{
    Beer_Brand beer;
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

    if(choice == 1)
    {
    cout<<"\n\tEnter the number of bottles of Tusker You want? :";
    cin>>beer.number_of_bottles;

    beer.total_cost = beer.number_of_bottles * 100;

    cout<<"\n\tYou will be expected to pay :"<<beer.total_cost;

    }else if(choice == 2)
    {
    cout<<"\n\tEnter the number of bottles of Pilsner You want? :";
    cin>>beer.number_of_bottles;

    beer.total_cost = beer.number_of_bottles * 120;

    cout<<"\n\tYou will be expected to pay :"<<beer.total_cost;

    }else if(choice == 3)
    {
    cout<<"\n\tEnter the number of bottles of Smirnoff ice You want? :";
    cin>>beer.number_of_bottles;

    beer.total_cost = beer.number_of_bottles * 140;

    cout<<"\n\tYou will be expected to pay :"<<beer.total_cost;

    }else if(choice == 4)
    {
    cout<<"\n\tEnter the number of bottles of White cap You want? :";
    cin>>beer.number_of_bottles;

    beer.total_cost = beer.number_of_bottles * 90;

    cout<<"\n\tYou will be expected to pay :"<<beer.total_cost;

    }
    else
        cout<<"\n\t!!!!!!!!!!!INVALID INPUT!!!!!!!!";

    cout<<"\n\n\n";


}
