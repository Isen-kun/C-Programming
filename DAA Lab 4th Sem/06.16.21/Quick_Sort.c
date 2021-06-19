#include <stdio.h>

int partition(int arr[], int beg, int end);
void quick_sort(int arr[], int beg, int end);

void main()
{
    int arr[30], i, n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    quick_sort(arr, 0, n - 1);
    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

void quick_sort(int arr[], int beg, int end)
{
    int piv;
    if (beg < end)
    {
        piv = partition(arr, beg, end);
        quick_sort(arr, beg, piv - 1);
        quick_sort(arr, piv + 1, end);
    }
}

int partition(int arr[], int beg, int end)
{
    int left, right, temp, piv, flag;
    piv = left = beg;
    right = end;
    flag = 0;
    while (flag != 1)
    {
        while ((arr[piv] <= arr[right]) && (piv != right))
            right--;
        if (piv == right)
            flag = 1;
        else if (arr[piv] > arr[right])
        {
            temp = arr[piv];
            arr[piv] = arr[right];
            arr[right] = temp;
            piv = right;
        }
        if (flag != 1)
        {
            while ((arr[piv] >= arr[left]) && (piv != left))
                left++;
            if (piv == left)
                flag = 1;
            else if (arr[piv] < arr[left])
            {
                temp = arr[piv];
                arr[piv] = arr[left];
                arr[left] = temp;
                piv = left;
            }
        }
    }
    return piv;
}
