#include <stdio.h>
#include <stdlib.h>

typedef struct Queue
{
    int val[50];
    int front, rear;
} queue;

void main()
{
    int choice;
    queue q;
    q.front = -1;
    q.rear = -1;
    void display(queue);
    void enque(queue *);
    void deque(queue *);
    void peek(queue);
    int isEmpty(queue);
    int isFull(queue);

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
            display(q);
            break;

        case 2:
            enque(&q);
            break;

        case 3:
            deque(&q);
            break;

        case 4:
            peek(q);
            break;

        default:
            printf("Sorry fam try again");
        }
    }
}

int isEmpty(queue q)
{
    if (q.rear == -1)
    {
        return 1;
    }
    return 0;
}

int isFull(queue q)
{
    if (q.rear == 49)
    {
        return 1;
    }
    return 0;
}

void display(queue q)
{
    int x, i;
    x = isEmpty(q);
    if (x == 1)
    {
        printf("\nThe queue is empty.");
        return;
    }
    for (i = q.front; i <= q.rear; i++)
    {
        printf("%d - ", q.val[i]);
    }
}

void enque(queue *q)
{
    int x, v, i;
    x = isFull(*q);
    if (x == 1)
    {
        printf("\nThe queue is Full.");
        return;
    }
    printf("Enter the value: ");
    scanf("%d", &v);
    if (q->rear == 49)
    {
        for (i = q->front; i <= q->rear; i++)
        {
            q->val[i - q->front] = q->val[i];
        }
        q->rear = q->rear - q->front;
        q->front = 0;
    }
    else if (q->rear == -1)
    {
        q->front = 0;
        q->rear = 0;
    }
    else
    {
        q->rear++;
    }
    q->val[q->rear] = v;
}

void deque(queue *q)
{
    int x;
    x = isEmpty(*q);
    if (x == 1)
    {
        printf("\nThe queue is empty.");
        return;
    }
    printf("%d removed.", q->val[q->front]);
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
        return;
    }
    q->front++;
}

void peek(queue q)
{
    int x;
    x = isEmpty(q);
    if (x == 1)
    {
        printf("\nThe queue is empty.");
        return;
    }
    printf("The front element is %d", q.val[q.front]);
}
