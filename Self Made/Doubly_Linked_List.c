#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *prev, *next;
} node;

void main()
{
    int choice;
    node *head = NULL;
    node *last = NULL;
    node *create_node(int);
    void create_list(node **, node **);
    void fwd_display(node *);
    void bkd_display(node *);
    void add_after(node *, node **);
    void add_before(node **);
    void del_node_val(node **, node **);

    while (1)
    {
        printf("\nPress");
        printf("\n0 to exit");
        printf("\n1 to create the list");
        printf("\n2 to display the list");
        printf("\n3 to reverse display the list");
        printf("\n4 to add node after a specific node");
        printf("\n5 to add node before a specific node");
        printf("\n6 to delete a node with specific value\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;

        case 1:
            create_list(&head, &last);
            break;

        case 2:
            fwd_display(head);
            break;

        case 3:
            bkd_display(last);
            break;

        case 4:
            add_after(head, &last);
            break;

        case 5:
            add_before(&head);
            break;

        case 6:
            del_node_val(&head, &last);
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

void create_list(node **head, node **last)
{
    int n, v, i;
    printf("\nHow many nodes would you like to add?: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the value of the node: ");
        scanf("%d", &v);
        node *temp;
        temp = create_node(v);
        temp->next = NULL;
        if (*head == NULL)
        {
            temp->prev = NULL;
            *head = temp;
        }
        else
        {
            (*last)->next = temp;
            temp->prev = *last;
        }
        *last = temp;
    }
}

void fwd_display(node *head)
{
    node *temp;
    printf("\nThe current list is: ");
    for (temp = head; temp != NULL; temp = temp->next)
    {
        printf("%d -> ", temp->val);
    }
    printf("NULL\n");
}

void bkd_display(node *last)
{
    node *temp;
    printf("\nThe current list is: \nNULL");
    for (temp = last; temp != NULL; temp = temp->prev)
    {
        printf(" <- %d", temp->val);
    }
    printf("\n");
}

void add_after(node *head, node **last)
{
    int v, x;
    node *temp, *new;
    printf("\nEnter the value of the node after which to be added: ");
    scanf("%d", &x);
    printf("Enter the value of the new node: ");
    scanf("%d", &v);
    new = create_node(v);
    if ((*last)->val == x)
    {
        new->next = NULL;
        new->prev = *last;
        (*last)->next = new;
        *last = new;
        return;
    }
    for (temp = head; temp != NULL; temp = temp->next)
    {
        if (temp->val == x)
        {
            new->next = temp->next;
            temp->next->prev = new;
            temp->next = new;
            new->prev = temp;
        }
    }
}

void add_before(node **head)
{
    int v, x;
    node *temp, *new;
    printf("\nEnter the value of the node before which to be added: ");
    scanf("%d", &x);
    printf("Enter the value of the new node: ");
    scanf("%d", &v);
    new = create_node(v);
    if ((*head)->val == x)
    {
        new->prev = NULL;
        new->next = *head;
        (*head)->prev = new;
        *head = new;
        return;
    }
    for (temp = *head; temp != NULL; temp = temp->next)
    {
        if (temp->val == x)
        {
            temp->prev->next = new;
            new->prev = temp->prev;
            temp->prev = new;
            new->next = temp;
            return;
        }
    }
    printf("Element not found.");
}

void del_node_val(node **head, node **last)
{
    int x;
    node *temp;
    printf("Enter the value of the node to be deleted: ");
    scanf("%d", &x);
    if ((*head)->val == x)
    {
        (*head)->next->prev = NULL;
        *head = (*head)->next;
        return;
    }
    for (temp = *head; temp != *last; temp = temp->next)
    {
        if (temp->val == x)
        {
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            return;
        }
    }
    if ((*last)->val == x)
    {
        (*last)->prev->next = NULL;
        *last = (*last)->prev;
    }
}
