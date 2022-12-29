#include<iostream>
using namespace std;

float small(float intager1, float intager2, float intager3);

int main()
{
    float int1, int2, int3, smallest;

    cout<<"Enter Three Intagers: ";
    cin>>int1>>int2>>int3;

    smallest =small(int1,int2,int3);



}

float small(float intager1, float intager2, float intager3)
{


    if(intager1 <= intager2   &&  intager1 <= intager3)
    {

    cout<<"\n\tThe smallest number is: "<<intager1;

    }else if(intager2 <= intager1  && intager2 <= intager3)
    {

    cout<<"\n\tThe smallest number is: "<<intager2;

    }else if(intager3 <= intager1  && intager3 <= intager2)
    {

    cout<<"\n\tThe smallest number is: "<<intager3;

    }

    cout<<"\n\n";


}
