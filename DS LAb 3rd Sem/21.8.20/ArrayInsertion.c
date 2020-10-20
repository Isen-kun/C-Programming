#include <stdio.h>

void main()
{
    int i, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, e, pos;
    printf("Enter the element to be inserted: ");
    scanf("%d", &e);
    printf("Enter the position to be inserted: ");
    scanf("%d", &pos);

    for (i = 9; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[i] = e;

    printf("The new array is:");
    for (i = 0; i < 10; i++)
    {
        printf(" %d ", a[i]);
    }
}
