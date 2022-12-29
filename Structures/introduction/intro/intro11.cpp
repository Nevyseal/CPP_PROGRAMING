#include <iostream>
#include <cmath>
using namespace std;

struct number
{
    float num;
    float square;
    float cube;
    float squareRoot;
    float cubeRoot;
};

int main()
{
    number n;
    cout << "Enter a number: ";
    cin >> n.num;
    n.square = pow(n.num, 2);
    n.cube = pow(n.num, 3);
    n.squareRoot = sqrt(n.num);
    n.cubeRoot = cbrt(n.num);
    cout << "The square of the number is: " << n.square << endl;
    cout << "The cube of the number is: " << n.cube << endl;
    cout << "The square root of the number is: " << n.squareRoot << endl;
    cout << "The cube root of the number is: " << n.cubeRoot << endl;
    return 0;
}