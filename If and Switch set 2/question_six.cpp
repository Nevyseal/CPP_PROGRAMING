#include<iostream>
using namespace std;
int main()
{
    int number, rem2, rem9;

    cout<<"\n\nInput a Number :";
    cin>>number;


    rem9 = number % 9;


    switch(rem9)
    {
    case '0':

        rem2 = number % 2 ;

        if(rem2 == 0)
            cout<<"\n\tNumber is Evenly divisible by 9";

            else
                cout<<"\n\tNumber is divisible but is an Odd Number";

            break;


    default:
        cout<<"\n\tNumber is not Divisible by 9\n\n\n";


    }


}
