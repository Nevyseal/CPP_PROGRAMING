#include<iostream>
using namespace std;
int main()
{

    char character;

    cout<<"Enter a character:";
    cin>>character;


    if(character >= 'A'  &&   character <= 'Z')
    {

    character = character + 32;
    cout<<"\n\tThe Character in Lowercase is : "<<character;

    }else if(character >= 'a'  && character <= 'z')
    {

    character = character - 32;
    cout<<"\n\tThe Character in Uppercase is : "<<character;

    }else

    cout<<"\n\tIts a special Character!!!";

    cout<<"\n\n\n";
}

