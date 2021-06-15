#include <stdio.h>

int divideMin(int arr[], int n)
{
    int prevMin;
    if (n == 1)
    {
        return arr[0];
    }
    else if (n == 2)
    {
        return arr[0] < arr[1] ? arr[0] : arr[1];
    }
    prevMin = divideMin(arr + 1, n - 1) < divideMin(arr, n - 2) ? divideMin(arr + 1, n - 1) : divideMin(arr, n - 2);
    return prevMin;
}

int divideMax(int arr[], int n)
{
    int prevMax;
    if (n == 1)
    {
        return arr[0];
    }
    else if (n == 2)
    {
        return arr[0] > arr[1] ? arr[0] : arr[1];
    }
    prevMax = divideMax(arr + 1, n - 1) > divideMax(arr, n - 2) ? divideMax(arr + 1, n - 1) : divideMax(arr, n - 2);
    return prevMax;
}

void main()
{
    int n, arr[10], i;
    printf("Enter the no of elements of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nThe minimum element of the array is = %d", divideMin(arr, n));
    printf("\nThe maximum element of the array is = %d", divideMax(arr, n));
}
