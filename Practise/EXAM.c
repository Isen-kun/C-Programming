#include<stdio.h>
#include<math.h>
#include<string.h>

  int *m()
    {
        int *p = 5;
        return p;
    }
    void main()
    {
        int *k = m();
        printf("%d", k);
    }
