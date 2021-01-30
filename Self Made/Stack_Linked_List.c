#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
} node;

void main()
{
    int choice;
    node *top = NULL;
    node *create_node(int);
    void display_list(node *);
    void push(node **);
    void pop(node **);
    void peek(node *);
    int isEmpty(node *);

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
            display_list(top);
            break;

        case 2:
            push(&top);
            break;

        case 3:
            pop(&top);
            break;

        case 4:
            peek(top);
            break;

        default:
            printf("Sorry fam try again");
        }
    }
}

node *create_node(int v)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->val = v;
    return temp;
}

int isEmpty(node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

void display_list(node *top)
{
    int x;
    x = isEmpty(top);
    if (x == 1)
    {
        printf("\nThe stack is empty.");
        return;
    }
    for (; top != NULL; top = top->next)
    {
        printf("%d -> ", top->val);
    }
    printf("NULL\n");
}

void push(node **top)
{
    int v;
    node *temp;
    printf("Enter the value: ");
    scanf("%d", &v);
    temp = create_node(v);
    if (*top == NULL)
    {
        temp->next = NULL;
    }
    else
    {
        temp->next = *top;
    }
    *top = temp;
}

void pop(node **top)
{
    int x;
    x = isEmpty(*top);
    if (x == 1)
    {
        printf("\nThe stack is empty.");
        return;
    }
    printf("%d popped.\n", (*top)->val);
    (*top) = (*top)->next;
}

void peek(node *top)
{
    int x;
    x = isEmpty(top);
    if (x == 1)
    {
        printf("\nThe stack is empty.");
        return;
    }
    printf("The top element is %d\n", top->val);
}
