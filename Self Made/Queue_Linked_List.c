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
    node *front = NULL;
    node *rear = NULL;
    node *create_node(int);
    void display_list(node *, node *);
    void enque(node **, node **);
    void deque(node **, node **);
    void peek(node *);
    int isEmpty(node *);

    while (1)
    {
        printf("\nPress");
        printf("\n0 to exit");
        printf("\n1 to display the queue");
        printf("\n2 to insert an element");
        printf("\n3 to delete an element");
        printf("\n4 to peek the queue\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;

        case 1:
            display_list(front, rear);
            break;

        case 2:
            enque(&front, &rear);
            break;

        case 3:
            deque(&front, &rear);
            break;

        case 4:
            peek(front);
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

int isEmpty(node *rear)
{
    if (rear == NULL)
    {
        return 1;
    }
    return 0;
}

void display_list(node *front, node *rear)
{
    int x;
    x = isEmpty(rear);
    if (x == 1)
    {
        printf("\nThe queue is empty.");
        return;
    }
    for (; front != NULL; front = front->next)
    {
        printf("%d -> ", front->val);
    }
    printf("NULL\n");
}

void enque(node **front, node **rear)
{
    int v;
    node *temp;
    printf("Enter the value: ");
    scanf("%d", &v);
    temp = create_node(v);
    temp->next = NULL;
    if ((*rear) == NULL)
    {
        (*front) = temp;
        (*rear) = temp;
        return;
    }
    (*rear)->next = temp;
    *rear = temp;
}

void deque(node **front, node **rear)
{
    int x;
    x = isEmpty(*rear);
    if (x == 1)
    {
        printf("\nThe queue is empty.");
        return;
    }
    printf("%d removed.\n", (*front)->val);
    if (*front == *rear)
    {
        *front = NULL;
        *rear = NULL;
        return;
    }
    *front = (*front)->next;
}

void peek(node *front)
{
    int x;
    x = isEmpty(front);
    if (x == 1)
    {
        printf("\nThe queue is empty.");
        return;
    }
    printf("The front element is %d\n", front->val);
}