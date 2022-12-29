#include<iostream>
using namespace std;
int main()
{

    char charcter;

    cout<<"Enter a Character :  ";
    cin>>charcter;

    if((charcter >= 'a' && charcter <= 'z')  || (charcter >= 'A'  &&  charcter <= 'Z'))
        cout<<"\nIts a letter\n\n";

    else if((charcter >= '0' && charcter <= '9'))
        cout<<"\nits a digit\n\n";

    else
        cout<<"\nIts a special Character\n\n";

}
