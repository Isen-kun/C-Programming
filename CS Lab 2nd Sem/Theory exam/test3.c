#include <stdio.h>

void main()
{
    int i;
    for (i = 1; i < 4; i++)
        printf("% d", (i % 2) ? i : 2 * i);
}