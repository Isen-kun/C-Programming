// Program = Floyd Warshall's Algorithm for all pair of Shortest Path using Dynamic Programming
// Makaut Roll no = 14800119019

#include <stdio.h>
#define Max 20
#define Inf 999999
void main()
{
    int i, j, k, min = Inf, n, w[Max][Max];
    printf("Enter the no. of vertices:\n");
    scanf("%d", &n);
    printf("Enter the weight of the edges:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &w[i][j]);
        }
    }
    printf("\nThe Adjacency Matrix is:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (w[i][j] == 0 && i != j)
                w[i][j] = Inf;
            if (i != j && w[i][j] == Inf)
                printf("Inf\t");
            else
                printf("%d \t", w[i][j]);
        }
        printf("\n");
    }
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (w[i][k] + w[k][j] < w[i][j])
                    w[i][j] = w[i][k] + w[k][j];
            }
        }
    }
    printf("\nThe Resultant Matrix is:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d ", w[i][j]);
        }
        printf("\n");
    }
    printf("\nThe Shortest Paths are:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i != j)
                printf("(%d->%d) = %d\n", i, j, w[i][j]);
        }
    }
}
