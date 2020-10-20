#include <stdio.h>

void main()
{
    int i, a[10] = {5, 47, 24, 74, 35, 16, 87, 98, 19, 10}, pos;
    printf("The current array is:");
    for (i = 0; i < 10; i++)
    {
        printf(" %d ", a[i]);
    }

    printf("\nEnter the position to be deleted: ");
    scanf("%d", &pos);

    for (i = pos; i < 10; i++)
    {
        a[i] = a[i + 1];
    }

    printf("\nThe new array is:");
    for (i = 0; i < 10; i++)
    {
        printf(" %d ", a[i]);
    }
}
