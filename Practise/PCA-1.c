#include<stdio.h>

void div_7()
{
    int i, a, b, sum=0;
    printf("Enter The first and last number of the range ");
    scanf("%d%d", &a, &b);
    for(i=a;i<=b;i++)
    {
        if(i%7 == 0)
            {
                sum+=i;
            }
    }
    printf("The sum is = %d", sum);
}

void armstrong()
{
    int n, m, r, s = 0;
    printf("Enter the number ");
    scanf("%d", &m);
    n = m;

    while (n != 0)
    {
        r = n % 10;
        s += r * r * r;
        n /= 10;
    }

    if (s == m)
        printf("%d is an Armstrong number.", m);
    else
        printf("%d is NOT an Armstrong number.", m);
}

void max_min()
{
    int i, n, max, min, ar[50];
    printf("Enter the number of elements to check");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    max = ar[0];
    min= ar[0];
    for(i=0; i<n; i++)
    {
        if(ar[i]>max)
            max = ar[i];
        if(ar[i]<min)
            min= ar[i];
    }
    printf("\n The greatest number is = %d", max);
    printf("\n The smallest number is = %d", min);
}

void arr_pro()
{
  int m, n, p, q, c, d, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];

  printf("Enter number of rows and columns of first matrix\n");
  scanf("%d%d", &m, &n);
  printf("Enter elements of first matrix\n");

  for (c = 0; c < m; c++)
    for (d = 0; d < n; d++)
      scanf("%d", &first[c][d]);

  printf("Enter number of rows and columns of second matrix\n");
  scanf("%d%d", &p, &q);

  if (n != p)
    printf("The multiplication isn't possible.\n");
  else
  {
    printf("Enter elements of second matrix\n");

    for (c = 0; c < p; c++)
      for (d = 0; d < q; d++)
        scanf("%d", &second[c][d]);

    for (c = 0; c < m; c++)
    {
      for (d = 0; d < q; d++)
      {
        for (k = 0; k < p; k++)
        {
          sum = sum + first[c][k]*second[k][d];
        }

        multiply[c][d] = sum;
        sum = 0;
      }
    }

    printf("Product of the matrices:\n");

    for (c = 0; c < m; c++)
    {
      for (d = 0; d < q; d++)
        printf("%d\t", multiply[c][d]);

      printf("\n");
    }
  }

}

void pattern()
{
    int i, j, n, k=1;
    printf("Enter the number of rows");
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        for(j=0; j<i; j++)
        {
            printf(" %d ",k);
            k++;
        }
        printf("\n");
    }
}

void main()
{
    //div_7();
    //armstrong();
    //max_min();
    //arr_pro();
    pattern();
}
