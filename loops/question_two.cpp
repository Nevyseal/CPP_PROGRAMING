#include<iostream>
using namespace std;
int main()
{
    int count = 1, num, sum = 0;

    for (count = 1; count != 0; count++)
    {
        printf("\nEnter a number: ");
        scanf("%d", &num);

        sum += num;

        if (num == 0)
        {
            printf("\n\tSum of your integers is %d\n\n", sum);
            break;
        }
    }
}
