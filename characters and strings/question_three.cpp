#include<iostream>
using namespace std;

int main()
{
    char character[1000];
    int digits, alphabet, special, spaces;
    int count;

    // assign all counters to zero
    digits = alphabet = special = spaces = 0;

    // input
    cout<<"\nEnter a sentence: ";
    cin.get(character,1000);

    // Loop through the character
    for (count = 0; character[count] != NULL; count++)
    {
        // comparison
        if (character[count] >= 'a' && character[count] <= 'z')
        {
            alphabet++;
        }
        else if (character[count] >= 'A' && character[count] <= 'Z')
        {
            alphabet++;
        }
        else if ((character[count] >= '0') && (character[count] <= '9'))
        {
            digits++;
        }
        else if (character[count] == ' ')
        {
            spaces++;
        }
        else
        {
            special++;
        }
    }


    cout<<"\n\t"<<alphabet<<" letters, "<<digits<<" digits, "<<spaces<<" spaces and "<<special<<" special characters.";
    cout<<"\n\n";
}
