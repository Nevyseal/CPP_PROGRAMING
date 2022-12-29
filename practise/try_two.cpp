#include<iostream>
#include<ctype.h>
using namespace std;
int main()
{
	char category;

	cout<<"\nEnter the category :";
	cin>>category;

    category = toupper(category);

	switch(category)
	{
		case 'G':
			cout<<"\n\tGold Members\n\n";
			break;
		case 'S':
			cout<<"\n\tSilver Members\n\n";
			break;
		case 'B':
			cout<<"\n\tBronze Members\n\n";
			break;
		case 'X':
			cout<<"\n\tOrdinary Members\n\n";
			break;
			default:
			cout<<category<<"\n\tInvalid category\n\n";
	}

}
