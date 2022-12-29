#include<iostream>
#include<math.h>
using namespace std;
int main ()
{

    double number,square,cube ,square_root, cube_root;

    cout<<"Enter a number: ";
    cin>>number;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

    square = pow(number,2);
    cube = pow(number,3);
    square_root = sqrt(number);
    cube_root =cbrt(number);


    cout<<"Square is: "<<square<<"\nThe cube is: "<<cube<<"\nThe Squareroot is:"<<square_root<<"\nThe Cube root is:"<<cube_root<<endl;

    return 0;








}
