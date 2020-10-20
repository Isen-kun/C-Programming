/* Use of simple arrays as parameters
sorting Bubble sort
display each loop*/

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int how_many, int data[], char *str)
{
    int i;
    printf("%s", str);
    for (i = 0; i < how_many; i++)
        printf("%d\t", data[i]);
}

void bubble(int data[], int how_many)
{
    int i, j, go_on;
    for (i = 0; i < how_many; i++)
    {
        print_array(how_many, data, "\ninside bubble\n");
        printf("i=%d, input any data to continue: ", i);
        scanf("%d", &go_on);
        for (j = how_many - 1; j > i; j--)
            if (data[j - 1] > data[j])
                swap(&data[j - 1], &data[j]);
    }
}

int main()
{
    const int Size = 5;
    int grades[5] = {78, 67, 92, 83, 88};
    printf("\n\n");
    bubble(grades, Size);
    print_array(Size, grades, "\nMy sorted grades\n");
    printf("\n\n");
    return 0;
}