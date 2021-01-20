#include <stdio.h>
#include <stdlib.h>

typedef struct Stack
{
    int val[50];
    int top;
} stack;

void main()
{
    int choice;
    stack s;
    s.top = -1;
    void display(stack);
    void push(stack *);
    void pop(stack *);
    void peek(stack);
    int isEmpty(stack);
    int isFull(stack);

    while (1)
    {
        printf("\nPress");
        printf("\n0 to exit");
        printf("\n1 to display the stack");
        printf("\n2 to push an element");
        printf("\n3 to pop an element");
        printf("\n4 to peek the stack\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;

        case 1:
            display(s);
            break;

        case 2:
            push(&s);
            break;

        case 3:
            pop(&s);
            break;

        case 4:
            peek(s);
            break;

        default:
            printf("Sorry fam try again");
        }
    }
}

int isEmpty(stack s)
{
    if (s.top == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(stack s)
{
    if (s.top == 49)
    {
        return 1;
    }
    return 0;
}

void display(stack s)
{
    int x, i;
    x = isEmpty(s);
    if (x == 1)
    {
        printf("\nThe stack is empty.");
        return;
    }
    for (i = s.top; i >= 0; i--)
    {
        printf("%d - ", s.val[i]);
    }
}

void push(stack *s)
{
    int x, v;
    x = isFull(*s);
    if (x == 1)
    {
        printf("\nThe stack is Full.");
        return;
    }
    printf("Enter the value: ");
    scanf("%d", &v);
    s->val[++s->top] = v;
}

void pop(stack *s)
{
    int x;
    x = isEmpty(*s);
    if (x == 1)
    {
        printf("\nThe stack is empty.");
        return;
    }
    printf("%d popped.", s->val[s->top--]);
}

void peek(stack s)
{
    int x;
    x = isEmpty(s);
    if (x == 1)
    {
        printf("\nThe stack is empty.");
        return;
    }
    printf("The top element is %d", s.val[s.top]);
}