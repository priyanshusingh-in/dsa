#include<stdio.h>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
};


struct Node* head=NULL;

void Insert_at_begin(int x)
{
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=x;
    new_node->next=head;
    head=new_node;
}

void Print()
{
    struct Node* temp=head;
    printf("List is: ");
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }

    printf("\n");

}

int main()
{
    head=NULL;
    printf("Enter how many numbers?");
    int n,i,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the number\n");
        scanf("%d",&x);
        Insert_at_begin(x);
        Print();
        }
    return 0;
}
