#include <stdio.h>

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if ((rear + 1) % SIZE == front)
    {
        printf("Queue Overflow!\n");
        return;
    }
    else
    {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;

    printf("%d inserted\n", value);
}

int dequeue(void)
{
    int value;

    if (front == -1)
    {
        printf("Queue Underflow!\n");
        return -1;
    }

    value = queue[front];

    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }

    return value;
}

void display(void)
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue: ");

    i = front;

    while (1)
    {
        printf("%d ", queue[i]);

        if (i == rear)
            break;

        i = (i + 1) % SIZE;
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
        printf("===== CIRCULAR QUEUE MENU =====\n");
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
