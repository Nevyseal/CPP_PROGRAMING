#include<iostream>
using namespace std;
int main()
{

    double measurements,conversion;

    cout<<"Enter the Measuremnts into CM :";
    cin>>measurements;

    conversion = measurements/100;

    cout<<"\n";

    cout<< measurements<<" cm  = "<<conversion<< " Meteres\n\n" ;

     return 0;

}
