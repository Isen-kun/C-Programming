/* USe of Simple arrays as parameters*/

#include <stdio.h>

double average_grades(int how_many, int grades[])
{
    int i;
    double sum = 0.0;
    for (i = 0; i < how_many; i++)
    {
        sum += grades[i];
    }
    return (sum / how_many);
}

void printgrades(int how_many, int grades[])
{
    int i;
    printf("I have %d grades\n", how_many);
    for (i = 0; i < how_many; i++)
        printf("%d\t", grades[i]);
}

int main(void)
{
    const int Size = 5;
    int grades[5] = {78, 67, 92, 83, 88};
    printgrades(Size, grades);
    printf("\n\nMy average is %.2f\n\n", average_grades(Size, grades));
    return 0;
}