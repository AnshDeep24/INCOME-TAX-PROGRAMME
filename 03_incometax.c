#include <stdio.h>

int main()
{
    float tax = 0, income;
    printf("Enter Your Income\n");
    scanf("%f", &income);

    if (income>=2500000 && income<=500000)
    {
        tax = tax + 0.05 * (income - 2500000);
    }
    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }
    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }
    printf("Your net income tax is to be paid by 26th march is %f\n", tax);

    return 0;
}