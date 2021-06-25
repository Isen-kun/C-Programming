#include <stdio.h>

void main()
{
    int n, dead[10], profit[10], slot[10], i, ch = 65, j, temp;
    char id[10], result[10], ctemp;
    printf("Enter the number of jobs (max 10): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        slot[i] = 0;
        id[i] = ch++;
        printf("\nEnter the deadline for Job %c: ", id[i]);
        scanf("%d", &dead[i]);
        printf("Enter the profit for Job %c: ", id[i]);
        scanf("%d", &profit[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (profit[j] < profit[j + 1])
            {
                ctemp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = ctemp;
                temp = dead[j];
                dead[j] = dead[j + 1];
                dead[j + 1] = temp;
                temp = profit[j];
                profit[j] = profit[j + 1];
                profit[j + 1] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = dead[i] - 1; j >= 0; j--)
        {
            if (slot[j] == 0)
            {
                result[j] = id[i];
                slot[j] = 1;
                break;
            }
        }
    }

    printf("\nThe resultant Job Scheduling is: ");
    for (i = 0; i < n; i++)
    {
        if (slot[i] == 1)
        {
            printf("%c ", result[i]);
        }
    }
}