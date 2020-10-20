#include <stdio.h>

void main()
{
    int x = 6, y = 8, z, w;
    y = x++;
    z = ++x;
    printf("x=%d y=%d z=%d", x, y, z);
}