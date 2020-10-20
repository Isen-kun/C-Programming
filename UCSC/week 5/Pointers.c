/* Use of Pointers*/

#include <stdio.h>

int main()
{
    const int Size = 5;
    int grades[5] = {78, 67, 92, 83, 88};
    double sum = 0.0;
    double *ptr_to_sum = &sum;
    int i;
    printf("\nMy grades are: \n ");
    for (i = 0; i < Size; i++)
    {
        printf("%d\t", grades[i]);
        sum += grades[i];
    }
    printf("\n\nMy average is: %.2f\n\n", sum / Size);
    printf("sum is at %p or %lu and is %lf\n", ptr_to_sum, ptr_to_sum, *ptr_to_sum);
    printf("grades are at %lu to %lu\n", grades, grades + 5);
    return 0;
}