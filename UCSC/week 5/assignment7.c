/* Average of the data*/

#include <stdio.h>

void main()
{
    int i, arr[10] = {45, 78, 65, 25, 14, 78, 67, 87, 21, 34}; //sorry I have no idea how to handle that amount of raw data manually
    double sum, avg = 0;
    printf("Data is: \n");
    for (i = 0; i < 10; i++)
    {
        printf(" %d ", arr[i]);
        sum += arr[i];
    }
    avg = sum / 10.0;
    printf("\nThe average of the data is %lf", avg);
}