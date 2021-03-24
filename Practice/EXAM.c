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
  void display_rev(struct node *);
  void count();

  while (1)
  {
    printf("\nPress");
    printf("\n0 to exit");
    printf("\n1 to create the list");
    printf("\n2 to display the list");
    printf("\n3 to count the number of nodes");
    printf("\n4 to display the list in reverse\n");

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
      count();
      break;

    case 4:
      display_rev(head);
      printf("\n");
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

void display_rev(struct node *temp)
{
  if (temp == NULL)
  {
    printf("\nThe list in reverse is: NULL");
    return;
  }
  display_rev(temp->next);
  printf(" <- %d", temp->val);
}

void count()
{
  struct node *temp;
  temp = head;
  int cnt = 0;
  while (temp != NULL)
  {
    cnt++;
    temp = temp->next;
  }
  printf("\nThe number of nodes in the list is %d\n", cnt);
}