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
    node *head = NULL;
    node *last = NULL;
    node *create_node(int);
    void create_list(node **, node **);
    void display_list(node *);
    void add_after(node *, node **);
    void add_before(node **, node **);
    // void del_node_val();
    // void del_node_pos();

    while (1)
    {
        printf("\nPress");
        printf("\n0 to exit");
        printf("\n1 to create the list");
        printf("\n2 to display the list");
        printf("\n3 to add node after a specific node");
        printf("\n4 to add node before a specific node");
        printf("\n5 to delete a node with specific value");
        printf("\n6 to Compute Josephus' Problem\n");

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
            display_list(head);
            break;

        case 3:
            add_after(head, &last);
            break;

        case 4:
            add_before(&head, &last);
            break;

            // case 5:
            //     del_node_val();
            //     break;

            // case 6:
            //     del_node_pos();
            //     break;

        default:
            printf("Sorry fam try again");
        }
    }
}

node *create_node(int v)
{
    node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
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
        if (*head == NULL)
        {
            temp->next = temp;
            *head = temp;
        }
        else
        {
            temp->next = *head;
            (*last)->next = temp;
        }
        *last = temp;
    }
}

void display_list(node *head)
{
    node *temp;
    printf("\nThe current list is: ");
    for (temp = head;; temp = temp->next)
    {
        printf("%d -> ", temp->val);
        if (temp->next == head)
        {
            break;
        }
    }
    printf("NULL\n");
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
        new->next = (*last)->next;
        (*last)->next = new;
        *last = new;
        return;
    }
    for (temp = head; temp != NULL; temp = temp->next)
    {
        if (temp->val == x)
        {
            new->next = temp->next;
            temp->next = new;
            return;
        }
    }
    printf("Element not found.");
}

void add_before(node **head, node **last)
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
        new->next = *head;
        *head = new;
        (*last)->next = *head;
        return;
    }
    for (temp = *head; temp->next != NULL; temp = temp->next)
    {
        if (temp->next->val == x)
        {
            new->next = temp->next;
            temp->next = new;
            return;
        }
    }
    printf("Element not found.");
}