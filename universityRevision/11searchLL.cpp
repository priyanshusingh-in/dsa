#include<bits/stdc++.h>
using namespace std;

struct node
    {
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

void searchItem(struct node *newnode, int itemToFind)
{
    cout<<"Item to Search: "<<itemToFind<<'\n';
    int pos = 1;
    while (newnode != NULL)
    {
        if (itemToFind == newnode->data)
        {
            cout << "ITEM FOUND at NODE: " << pos << endl;
            return;
        }
        pos++;
        newnode = newnode->next;
    }

    cout << "ITEM NOT FOUND!" << endl;
    return;
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
    searchItem(head,50);

    return 0;
}
