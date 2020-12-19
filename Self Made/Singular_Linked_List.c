#include <stdio.h>
#include <stdlib.h>

struct node
{
    int val;
    struct node *next;
};
struct node *head = NULL;
struct node *last = NULL;

void main()
{
    int choice;
    struct node *create_node(int);
    void create_list();
    void display_list();
    void add_after();
    void add_before();

    while (1)
    {
        printf("\nPress");
        printf("\n0 to exit");
        printf("\n1 to create the list");
        printf("\n2 to display the list");
        printf("\n3 to add node after a specific node");
        printf("\n4 to add node before a specific node\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;

        case 1:
            create_list();
            break;

        case 2:
            display_list();
            break;

        case 3:
            add_after();
            break;

        case 4:
            add_before();
            break;

        default:
            printf("Sorry fam try again");
        }
    }
}

struct node *create_node(int v)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->val = v;
    return temp;
}

void create_list()
{
    int n, v, i;
    printf("\nHow many nodes would you like to add?: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the value of the node: ");
        scanf("%d", &v);
        struct node *temp;
        temp = create_node(v);
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
        }
        else
        {
            last->next = temp;
        }
        last = temp;
    }
}

void display_list()
{
    struct node *temp;
    temp = head;
    printf("\nThe current list is: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->val);
        temp = temp->next;
    }
    printf("NULL\n");
}

void add_after()
{
    int v, x;
    struct node *temp, *new;
    temp = head;
    printf("\nEnter the value of the node after which to be added: ");
    scanf("%d", &x);
    while (temp != NULL)
    {
        if (temp->val == x)
        {
            printf("Enter the value of the new node: ");
            scanf("%d", &v);
            new = create_node(v);
            new->next = temp->next;
            temp->next = new;
            return;
        }
        temp = temp->next;
    }
    printf("Element not found.");
}

void add_before()
{
    int v, x;
    struct node *temp, *new;
    temp = head;
    printf("\nEnter the value of the node before which to be added: ");
    scanf("%d", &x);
    printf("Enter the value of the new node: ");
    scanf("%d", &v);
    new = create_node(v);
    if (head->val == x)
    {
        new->next = head->next;
        head = new;
        return;
    }
    while (temp->next != NULL)
    {
        if (temp->next->val == x)
        {
            new->next = temp->next;
            temp->next = new;
            return;
        }
        temp = temp->next;
    }
    printf("Element not found.");
}