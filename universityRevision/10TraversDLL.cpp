#include<bits/stdc++.h>
using namespace std;

struct node
    {
        struct node *prev;
        int data;
        struct node *next;
    };

struct node *head;
void addLast(struct node **head, int val)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;

    if(*head==NULL)
    {
        *head=newnode;
    }
    else
    {
        struct node *lastnode=*head;

        while(lastnode->next!=NULL)
        {
            lastnode=lastnode->next;
        }
        lastnode->next=newnode;
    }
}

void display(struct node *newnode)
{
    struct node *temp=head;
    while(newnode!=NULL)
    {
        printf("%d->",newnode->data);
        newnode=newnode->next;
    }
    printf("NULL\n");
}

void search(struct node *newnode)
{
    int item=10;
    struct node *temp=head;
    while(newnode!=NULL)
    {
        if(item==newnode->data)
        {

        }
    }

}


int main()
{
    struct node *head=NULL;
    addLast(&head,10);
    addLast(&head,20);
    addLast(&head,30);
    addLast(&head,40);
    addLast(&head,50);


    display(head);

    return 0;
}
