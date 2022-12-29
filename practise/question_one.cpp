#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
    char input;

    cout<<"Enter a Character :";
    cin>>input;

    if((input >= 'A')     &&  (input <= 'Z' ))
    {
       input = input + 32;
       cout<<input;
    }else if((input >= 'a')  && (input <= 'z'))
    {
        input = input - 32;
        cout<<input;
    }


}
