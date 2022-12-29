#include<iostream>
using namespace std;
int main()
{
    double sum, subject1, subject2, subject3, subject4, subject5;


    cout<<"Enter The Marks :";
    cin>>subject1;
    cin>>subject2;
    cin>>subject3;
    cin>>subject4;
    cin>>subject5;



     sum = subject1 + subject2 + subject3 + subject4 + subject5;
     double average =  sum / 5.0;

     if ((average >= 75) && (average <= 100))
		cout<<"\n\tDistinction.\n";

	else if ((average >= 65) && (average < 75))
	cout<<"\n\tCredit.\n";

	else if ((average >= 50) && (average < 65))
		cout<<"\n\tPass.\n";

	else if ((average >= 0) && (average < 50))
	cout<<"\n\tFail.\n";


	return 0;







}
