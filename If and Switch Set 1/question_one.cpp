#include<iostream>
using namespace std;
int main()
{


    //Display the menu

    cout<<"\n\t ****Jamal and DaughtersPub****\n\n";
    cout <<"\tBeer Brand \t\tPrice\n";
    cout<<"\t 1)Tusker\t\t100/=\n";
    cout<<"\t 2)Pilsner\t\t120/=\n";
    cout<<"\t 3)Smirnoff Ice\t\t140/=\n";
    cout<<"\t 4)White Cap\t\t90/=\n\n";

    // Accept the input

    int choice;
    cout<<"\tEnter your choice: ";
    cin>>choice;

    // caculations

    double amount;


    if(choice == 1)
    {
      cout<<"\n\tHow many bottles of Tusker do you want? :";
      cin>>amount;
      cout<<"\n\t The bottles of Tusker will cost you Kshs."<<amount * 100<<"\n\n";

    }

     else if(choice == 2)
    {
      cout<<"\n\tHow many bottles of Plisner do you want? : ";
      cin>>amount;
      cout<<"\n\t The bottles of Plisner will cost you Kshs."<<amount * 120<<"\n\n";

    }

     else if(choice == 3)
    {
      cout<<"\n\tHow many bottles of Smirnoff Ice do you want? : ";
      cin>>amount;
      cout<<"\n\t The bottles of Smirnoff ice will cost you Kshs."<<amount * 140<<"\n\n";

    }

    else if(choice == 4)
    {
      cout<<"\n\tHow many bottles of White Cap do you want? : ";
      cin>>amount;
      cout<<"\n\t The bottles of White Cap will cost you Kshs."<<amount * 90<<"\n\n";

    }

    return 0;








}
