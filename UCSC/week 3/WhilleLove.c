/* How strong is your love calculator*/

#include <stdio.h>

int main()
{
    int repeat;
    printf("How strong is your love 1-10?: ");
    scanf("%d", &repeat);
    printf("\nI love you very");
    while (repeat > 0)
    {
        printf("\n very");
        repeat--;
    }
    printf(" much.\n\n");
    return 0;
}