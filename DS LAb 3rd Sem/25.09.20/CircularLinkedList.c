#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;
struct node *last = NULL;

void create(int);
void display(void);
void insert_begin(int);
void insert_specific(int, int);

void main()
{
    int i, choice, n, d, pos;
    while (1)
    {
        printf("\n\nPRESS");
        printf("\n 0 to exit");
        printf("\n 1 to create the list");
        printf("\n 2 to display the list");
        printf("\n 3 to insert a node at beginning of the list");
        printf("\n 4 to insert a node at specific position");

        printf("\n\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;

        case 1:
            printf("Enter the initial population: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("Enter the value of the node: ");
                scanf("%d", &d);
                create(d);
            }
            break;

        case 2:
            display();
            break;

        case 3:
            printf("Enter the value of the node: ");
            scanf("%d", &d);
            insert_begin(d);
            break;

        case 4:
            printf("Enter the position of the node: ");
            scanf("%d", &pos);
            printf("Enter the value of the node: ");
            scanf("%d", &d);
            insert_specific(pos, d);
            break;
        }
    }
}

void create(int d)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = d;
    if (last == NULL)
    {
        temp->next = temp;
    }
    else
    {
        temp->next = last->next;
        last->next = temp;
    }
    last = temp;
}

void display()
{
    struct node *q;
    q = last->next;
    while (q != last)
    {
        printf(" %d -> ", q->data);
        q = q->next;
    }
    printf(" %d -> ", q->data);
}

void insert_begin(int d)
{
    struct node *temp, *q;
    temp = malloc(sizeof(struct node));
    temp->data = d;
    q = last->next;
    last->next = temp;
    temp->next = q;
}

void insert_specific(int pos, int d)
{
    struct node *temp, *q;
    int c = 1;
    temp = malloc(sizeof(struct node));
    temp->data = d;
    q = last->next;
    while (c < pos)
    {
        q = q->next;
        c++;
    }
    temp->next = q->next;
    q->next = temp;
    if (q == last)
        last = temp;
}