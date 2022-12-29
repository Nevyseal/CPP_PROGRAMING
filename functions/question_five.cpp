#include<iostream>
using namespace std;

float get_big(float num1, float num2, float num3);

int main()
{

    float number1, number2, number3, biggest;

    cout<<"Enter Three Numbers :";
    cin>>number1>>number2>>number3;


    biggest = get_big(number1,number2,number3);



    cout<<"\n\tThe biggest number is :"<<biggest;

    cout<<"\n\n";

}

float get_big(float num1, float num2, float num3)
{

    if(num1 >= num2   && num1 >= num3)
    {
        return num1;

    }else if(num2 >= num1  && num2 >= num3)
    {
        return num2;

    }else

    return num3;





}
