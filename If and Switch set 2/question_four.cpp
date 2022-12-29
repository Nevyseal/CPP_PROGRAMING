#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    float x, y, a, b, c;

    printf("Enter value of X: ");
    scanf("%f", &x);

    if (x > 5)
    {
        // for y = 4x^3 + 2x - 6
        a = 4 * pow(x, 3);
        b = 2 * x;
        c = -6;
        y = a + b + c;
    }
    else if (x < 5)
    {
        // for y = 3x^2 - 4y + 12
        a = (3 * pow(x, 2)) / 5.0;
        b = 12.0 / 5;
        y = a + b;
    }
    else if (x == 5)
    {
        // for y = 6x - 5
        a = 6 * x;
        c = -5;
        y = a + b;
    }
    cout<<"\n\tThe Value of Y is:"<<y<<endl;


    return 0;


}
