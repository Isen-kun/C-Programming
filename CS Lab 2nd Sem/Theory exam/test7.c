#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    double r1, r2;

    printf("Enter a, b and c where a*x*x + b*x + c = 0\n");
    scanf("%d%d%d", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d < 0)
    { //complex roots, i is for iota
        printf("First root = %.2lf + i%.2lf\n", -b / (double)(2 * a), sqrt(-d) / (2 * a));
        printf("Second root = %.2lf - i%.2lf\n", -b / (double)(2 * a), sqrt(-d) / (2 * a));
    }
    else
    { //real roots
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("First root = %.2lf\n", r1);
        printf("Second root = %.2lf\n", r2);
    }

    return 0;
}