#include <stdio.h>

int hcf;
int find_hcf(int a, int b, int i)
{
    if (a % i == 0 && b % i == 0)
        hcf = i;
    if (i == a || i == b)
        return hcf;
    else
        return find_hcf(a, b, ++i);
}
void main()
{
    int n1, n2, hcf = 0, i = 1;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    hcf = find_hcf(n1, n2, i);
    printf("\nthe hcf of %d and %d is %d", n1, n2, hcf);
}