#include<iostream>
using namespace std;
int main()
{
	int row,column,a_no,num,no[100],a[100];

	cout<<"How many numbers do you want to enter : ";
	cin>>num;

	for(row = 0; row < num; row++)
	{
		cout<<"Enter numbers "<<row+1<<" : ";
		cin>>no[row];
		a[row] = no[row];
	}
	for(row = 0; row < num; row++)
	{
		for(column = row+1; column < num; column++)
		{
			if(no[row] > no[column])
			{
				a_no = no[row];
				no[row] = no[column];
				no[column] = a_no;
			}
		}
	}
	cout<<"\n----------------------------------";
	cout<<"\nOriginal numbers\tascending";
	cout<<"\n----------------------------------";
	for(row = 0; row < num; row++)
	{
		cout<<"\n"<<a[row]<<"\t\t\t"<<no[row]<<"\t\t";
	}
	cout<<"\n----------------------------------\n";
	cout<<"\n\n";
	return 0;
}
