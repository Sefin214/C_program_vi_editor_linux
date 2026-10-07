#include <stdio.h>
#define SIZE 5

int queue[SIZE];   //Array to hold the queue elements

//initialising front and rear to -1 initially
int front = -1;     
int rear = -1;

//Enqueue function
void enqueue(int value)
{
    if (rear == SIZE - 1)    //if rear reaches the maximum size
    {
        printf("Queue Overflow!\n");
        return;
    }

    if (front == -1)        //if front is -1 => empty queue
    {
        front = 0;
    }
    rear++;
    queue[rear] = value;     //rear is incremented and at the position of rear of queue value is added
    printf("%d inserted\n", value);
}

//Dequeue function
int dequeue(void)
{
    int value;
    if (front == -1)        //if front is -1 => nothing to dequeue
    {
        printf("Queue Underflow!\n");
        return -1;
    }

    value = queue[front];
    front++;

    if (front > rear)
    {
        front = -1;
        rear = -1;
    }

    return value;
}

//Display the Queue
void display(void)
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");

    for (i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }

    printf("\n");
}

int main(void)
{
    int choice;
    int value;

    while (1)
    {
        printf("\n");
        printf("===== QUEUE MENU =====\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");

        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);

                enqueue(value);
                break;

            case 2:
                value = dequeue();

                if (value != -1)
                {
                    printf("Deleted: %d\n", value);
                }
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
