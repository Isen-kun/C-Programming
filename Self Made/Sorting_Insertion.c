#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int n);
void main()
{
    int arr[30], i, n;
    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    insertion_sort(arr, n);
    printf("\nThe sorted array is:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void insertion_sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j]) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}