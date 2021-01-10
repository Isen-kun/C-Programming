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
    node *head[3] = {NULL, NULL, NULL};
    node *last[3] = {NULL, NULL, NULL};
    node *create_node(int);
    void create_list(node **, node **);
    void fwd_display(node *);
    void palin_check(node *, node *);
    void path_check(node *, node *);
    void bubble_sort(node *);
    void split_list(node *, node **, node **, node **, node **);

    while (1)
    {
        printf("\nPress");
        printf("\n0 to exit");
        printf("\n1 to create the list");
        printf("\n2 to display the list");
        printf("\n3 to check if Palindrome values or not");
        printf("\n4 to check the path");
        printf("\n5 to bubble sort the list");
        printf("\n6 to split the list(Odd & Even wise)\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
            break;

        case 1:
            create_list(&head[0], &last[0]);
            break;

        case 2:
            fwd_display(head[0]);
            break;

        case 3:
            palin_check(head[0], last[0]);
            break;

        case 4:
            path_check(head[0], last[0]);
            break;

        case 5:
            bubble_sort(head[0]);
            break;

        case 6:
            split_list(head[0], &head[1], &head[2], &last[1], &last[2]);
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

void palin_check(node *head, node *last)
{
    node *temp1, *temp2;
    for (temp1 = head, temp2 = last; temp1 != temp2 && temp1->prev != temp2; temp1 = temp1->next, temp2 = temp2->prev)
    {
        if (temp1->val != temp2->val)
        {
            printf("\nThis series of numbers is not a Palindrome\n");
            return;
        }
    }
    printf("\nThis series of numbers is a Palindrome\n");
}

void path_check(node *head, node *last)
{
    node *temp;
    for (temp = head; temp->next != NULL; temp = temp->next)
    {
    }
    if (temp == last)
    {
        printf("\nThe path is correct\n");
        return;
    }
    printf("\nThe path is not correct\n");
}

void bubble_sort(node *head)
{
    struct node *temp1, *temp2;
    int v_temp;
    for (temp1 = head; temp1->next != NULL; temp1 = temp1->next)
    {
        for (temp2 = head; temp2->next != NULL; temp2 = temp2->next)
        {
            if (temp2->val > temp2->next->val)
            {
                v_temp = temp2->val;
                temp2->val = temp2->next->val;
                temp2->next->val = v_temp;
            }
        }
    }
    fwd_display(head);
}

void split_list(node *head0, node **head1, node **head2, node **last1, node **last2)
{
    struct node *temp;
    for (temp = head0; temp != NULL; temp = temp->next)
    {
        if (temp->val % 2 != 0)
        {
            if (*head1 == NULL)
            {
                temp->prev = NULL;
                *head1 = temp;
            }
            else
            {
                (*last1)->next = temp;
                temp->prev = *last1;
            }
            *last1 = temp;
        }
        else
        {
            if (*head2 == NULL)
            {
                temp->prev = NULL;
                *head2 = temp;
            }
            else
            {
                (*last2)->next = temp;
                temp->prev = *last2;
            }
            *last2 = temp;
        }
    }
    (*last1)->next = NULL;
    (*last2)->next = NULL;

    printf("\nThe odd list is:");
    fwd_display(*head1);
    printf("\nThe even list is:");
    fwd_display(*head2);
}