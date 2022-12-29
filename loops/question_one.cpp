#include<iostream>

using namespace std;
int main()
{

    int cube,square,number;

    cout<<"Number\t\tSquare\t\tCube"<<endl;


    for(number = 2;number <= 10;number++)
    {
        square = number * number;
        cube = number * number * number;
        cout<<"\n"<<number<<"\t\t"<<square<<"\t\t"<<cube<<"\n";
    }
    return 0;
}
