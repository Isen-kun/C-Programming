#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[30], num, i, n, beg, end, mid, flag = 0;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements in ascending order: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the number to be searched for: ");
    scanf("%d", &num);
    beg = 0;
    end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (arr[mid] == num)
        {
            printf("\n%d is present in the array at position %d", num, mid + 1);
            flag = 1;
            break;
        }
        else if (arr[mid] > num)
            end = mid - 1;
        else
            beg = mid + 1;
    }
    if (beg > end && flag == 0)
        printf("\n%d does not exists in the array", num);
}