/* Recusive Vs Iterative Factorial*/

#include <stdio.h>

long int factorial(int n)
{
    long f = 1;
    int i;
    for (i = 1; i <= n; i++)
        f = f * i;
    return f;
}

long int recursive_factorial(int n)
{
    if (n == 1)
        return 1;
    else
        return (recursive_factorial(n - 1) * n);
}

int main(void)
{
    int how_many = 0, i;
    printf("I want table of factorial upto n: ");
    scanf("%d", &how_many);
    for (i = 1; i <= how_many; i++)
    {
        printf("\n %d \t %ld \n", i, factorial(i));
        printf("\n %d \t %ld \n", i, recursive_factorial(i));
    }
    return 0;
}