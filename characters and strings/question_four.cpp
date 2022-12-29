#include <iostream>
using namespace std;


int main()
{
    char character, converted;

    // input
    cout<<("\nEnter a character: ");
    cin>>character;

    // conversion
    if (character >= 'A' && character <= 'Z')
    {
        converted = character + 32;
        cout<<"\n\t"<<character<<"  in lower case is :"<<converted;
    }
    else if (character >= 'a' && character <= 'z')
    {
        converted = character - 32;
        cout<<"\n\t"<<character<<"  in upper case is :"<<converted;
    }
    else
    {
        cout<<"\n\tINVALID INPUT TRY AGAIN";
    }

    cout<<"\n\n";
}
