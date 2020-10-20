#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL;

void create_list(int);
void display(void);
void insert_begin(int);
void insert_specific(int, int);
void count_nodes(void);
void search(int);
void del_node(int);
void del_node_val(int);
void reverse(struct node **start);

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
        printf("\n 5 to count the no of nodes");
        printf("\n 6 to search an element in the list");
        printf("\n 7 to delete an element from a specific position");
        printf("\n 8 to delete an element of particular value");
        printf("\n 9 to reverse the list.");

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
                create_list(d);
            }
            break;

        case 2:
            display();
            break;

        case 3:
            printf("Enter the value: ");
            scanf("%d", &d);
            insert_begin(d);
            break;

        case 4:
            printf("Enter the position: ");
            scanf("%d", &pos);
            printf("Enter the value: ");
            scanf("%d", &d);
            insert_specific(pos, d);
            break;

        case 5:
            count_nodes();
            break;

        case 6:
            printf("Enter the value: ");
            scanf("%d", &d);
            search(d);
            break;

        case 7:
            printf("Enter the position: ");
            scanf("%d", &pos);
            del_node(pos);
            break;

        case 8:
            printf("Enter the value: ");
            scanf("%d", &d);
            del_node_val(d);
            break;

        case 9:
            reverse(&start);
            printf("The new list is\n");
            display();
            break;
        }
    }
}

void create_list(int num)
{
    struct node *temp, *q;
    temp = malloc(sizeof(struct node));
    temp->data = num;
    if (start == NULL)
    {
        temp->next = NULL;
        start = temp;
    }
    else
    {
        q = start;
        while (q->next != NULL)
        {
            q = q->next;
        }
        temp->next = q->next;
        q->next = temp;
    }
}

void display()
{
    struct node *q;
    q = start;
    while (q != NULL)
    {
        printf(" %d -> ", q->data);
        q = q->next;
    }
}

void insert_begin(int d)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->data = d;
    temp->next = start;
    start = temp;
}

void insert_specific(int p, int num)
{
    struct node *q, *temp;
    int count = 0;
    temp = malloc(sizeof(struct node));
    temp->data = num;
    q = start;
    while (count < p - 1)
    {
        q = q->next;
        if (q = NULL)
        {
            printf("Incorrect position");
            exit(0);
        }
        count++;
    }
    temp->next = q->next;
    q->next = temp;
}

void count_nodes()
{
    int count;
    struct node *q;
    q = start;
    count = 0;
    while (q != NULL)
    {
        count++;
        q = q->next;
    }
    printf("No of elements = %d", count);
}

void search(int num)
{
    struct node *q;
    q = start;
    int count, flag;
    count = 0;
    flag = 0;
    while (q != NULL)
    {
        if (q->data == num)
        {
            flag = 1;
            break;
        }
        count++;
        q = q->next;
    }
    if (flag == 1)
        printf("Data found at index %d", count + 1);
    else
        printf("Data not found in the list");
}

void del_node(int pos)
{
    struct node *temp, *q;
    int count;
    q = start;
    count = 0;
    while (count < pos - 1)
    {
        q = q->next;
        count++;
    }
    temp = q->next;
    q->next = temp->next;
    free(temp);
}

void del_node_val(int val)
{
    struct node *temp, *q;
    if (start->data == val)
    {
        temp = start;
        start = start->next;
        free(temp);
        return;
    }
    q = start;
    while (q->next->data == val)
    {
        temp = q->next;
        q->next = temp->next;
        free(temp);
        return;
    }
    q = q->next;
    if (q->next->data == val)
    {
        temp = q->next;
        q->next = temp->next;
        free(temp);
        return;
    }
    printf("%d is not present in the list", val);
}

void reverse(struct node **start)
{
    struct node *p = NULL;
    struct node *q = *start;
    struct node *next;

    while (q != NULL)
    {
        next = q->next;
        q->next = p;
        p = q;
        q = next;
    }

    *start = p;
}