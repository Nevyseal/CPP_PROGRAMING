#include<iostream>
using namespace std;
int main()
{
    int number, square, cube;

    cout<<"Number\t\tSquare\t\tCube\n"<<endl;

    number != 1;

    do{
        square = number * number;
        cube = number * number * number;
        number = number + 1;
        cout<<number<<"\t\t"<<square<<"\t\t"<<cube<<"\n";
    }while(number <= 10);
    return 0;
}
