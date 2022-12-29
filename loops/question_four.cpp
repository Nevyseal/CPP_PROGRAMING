#include<iostream>
using namespace std;
int main()
{

    int num, count = 1;
    char option;


    do
    {
        // reciprocal
        cout<<"\nEnter a number: ";
        cin>>num;


        cout<<"\n\tYour reciprocal is   : 1/ "<< num;

        // continuation
        cout<<"\n\nDo you want to continue (c/x): ";
        cin>>option;

        switch (option)
        {
        case 'x':
            cout<<"\n\n";
            exit(0);
            break;
        case 'c':
            count++;
            break;

        default:
            cout<<"\n\n\tINVALID INPUT TRY AGAIN!\n";
        }

    } while (count <= 99);

    return 0;
}
