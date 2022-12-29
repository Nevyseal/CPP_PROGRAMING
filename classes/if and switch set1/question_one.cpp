#include <iostream>
using namespace std;


class Beer_Brand
{
private:
    int number_of_bottles;
    double total_cost;
public:
    void computation();
};
int main()
{
     Beer_Brand beer;

     beer.computation();

     cout<<"\n\n\n";

}
void  Beer_Brand::computation()
{
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
        cin>>number_of_bottles;

        cout<<"\n\tThe bottles of Tusker will cost you Kshs :"<<number_of_bottles * 100;
        break;
    case 2:
        cout<<("\n\tHow many bottles of Pilsner do you want? ");
        cin>>number_of_bottles;
        cout<<"\n\tThe bottles of Plisner will cost you Kshs :"<<number_of_bottles * 120;
        break;
    case 3:
        cout<<("\n\tHow many bottles of Smirnoff Ice do you want? ");
        cin>>number_of_bottles;
        cout<<"\n\tThe bottles of Smirnoff will cost you Kshs :"<<number_of_bottles * 140;
        break;
    case 4:
        cout<<("\n\tHow many bottles of White Cup do you want? ");
        cin>>number_of_bottles;
        cout<<"\n\tThe bottles of White cup will cost you Kshs :"<<number_of_bottles * 90;
        break;
    default:
        cout<<"\n\tInvalid input!\n";
    }
}

