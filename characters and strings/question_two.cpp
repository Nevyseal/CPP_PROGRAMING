#include<iostream>
using namespace std;

int main()
{
    char character;

    // input
    cout<<"\n\nEnter a character: ";
    cin>>character;

    // comparison
    if (character >= 'A' && character <= 'Z')
    {
        cout<<"\n\t is in upper case.";
    }
    else if (character >= 'a' && character <= 'z')
    {
        cout<<"\n\t is in lower case.";
    }
    else
    {
        cout<<"\n\t is not a letter.";
    }

    cout<<"\n\n";
}
