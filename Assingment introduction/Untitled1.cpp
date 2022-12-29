#include <stdio.h>

int main()
{
    float deposit = 10000;
    float balance, interest, compoundInterest;

    printf("\n\n\t\t Year\t Interest\t Balance");

    // Computation
    for (int years = 1; years <= 10; years++)
    {
        // interest and compound interest
        interest = (10.0 / 100) * deposit;

        // New balance
        balance = deposit + interest;

        // new deposit
        deposit += interest;

        // compound interest
        compoundInterest += interest;

        printf("\n\t\t %2d\t %.2f\t %.2f", years, interest, balance);
    }

    // compound interest
    printf("\n\n\tThe compounded interst for 10 years is Kshs. %.2f", compoundInterest);

    // total balance
    printf("\n\tThe balance after 10 years at 10.00 is Kshs. %.2f \n\n", balance);
}
