#include<stdio.h>
#include<stdlib.h>
#define MAX 50
void insert();
void queue_delete();
void display();
int queue_array[MAX];
int rear=-1;
int front=-1;
int main()
{
    int choice;
    while(1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice: ");
        switch(choice)
        {
            case 1:
                insert();
                break;
            case 2:
                queue_delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("INCORRECT CHOICE!!!!");
                break;
        }
    }
    return 0;
}

void insert()
{
    int add_item;
    if(rear==MAX-1)
    printf("Queue Overflow \n");
    else
    {
        if(front==-1)
        front=0;
        printf("Insert the elements in Queue: ");
        scanf("%d",&add_item);
        rear=rear+1;
        queue_array[rear]=add_item;
    }
}

void queue_delete()
{
    if(front==-1||front>rear)
    {
        printf("Queue Underflow \n");
        return;
    }
    else
    {
        printf("Element deleted from queue if: %d\n",queue_array[front]);
        front=front+1;
    }
}

void display()
{
    int i;
    if(front==-1)
    printf("Queue if empty \n");
    else
    {
        printf("QUeue is: \n");
        for(i=front;i<=rear;i++)
        printf("%d",queue_array[i]);
        printf("\n");
    }
}

