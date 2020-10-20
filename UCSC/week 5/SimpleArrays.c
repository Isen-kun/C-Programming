/* Use of simple arrays*/

#include <stdio.h>

int main()
{
    const int Size = 5;
    int grades[5] = {78, 67, 92, 83, 88};
    double sum = 0.0;
    int i;
    printf("\nMy grades are: \n ");
    for (i = 0; i < Size; i++)
    {
        printf("%d\t", grades[i]);
        sum += grades[i];
    }
    printf("\n\nMy average is: %.2f\n\n", sum / Size);
    return 0;
}