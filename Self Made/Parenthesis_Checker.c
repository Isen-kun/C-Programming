#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    char val[50];
    int top;
} stack;

void main()
{
    stack st;
    st.top = -1;
    char ch, str[50];
    int i, flag = 0;
    void push(stack *, char);
    char pop(stack *);

    printf("Enter your expresson: ");
    // scanf("%s", &str);
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            push(&st, str[i]);
        }
        else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            ch = pop(&st);
            if ((str[i] == ')' && ch != '(') || (str[i] == ')' && ch != '(') || (str[i] == ')' && ch != '('))
            {
                flag = 1;
                break;
            }
        }
    }
    if (st.top != -1)
    {
        flag = 1;
    }
    if (flag == 0)
    {
        printf("This is a valid expression.");
    }
    else
    {
        printf("This is NOT a valid expression.");
    }
}

void push(stack *s, char v)
{
    s->val[++s->top] = v;
}

char pop(stack *s)
{
    return (s->val[s->top--]);
}