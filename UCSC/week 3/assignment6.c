#include <stdio.h>
#include <math.h>

int main()
{
    float i = 0.0;
    for (i = 0.0; i <= 1.0; i += 0.1)
    {
        printf("sin(%f) = %lf \t cos(%f) = %lf\n", i, sin(i), i, cos(i));
    }

    return 0;
}