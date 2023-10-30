#include<bits/stdc++.h>
using namespace std;

typedef struct
{
    int* array;
    int capacity;
    int size;
} Heap;

//Function to create a new heap
Heap* createHeap(int capacity)
{
    Heap* heap=(Heap*)malloc(sizeof(Heap));
    heap->array=(int*)malloc(capacity* sizeof(int));
    heap->capacity=capacity;
    heap->size=0;
    return heap;
}

//Function to swap two elements in the heap
void swap(int* a, int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

//Function to heapify a subtree rooted at index index
void heapify(Heap *heap,int i)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    
    if(left<heap->size&&heap->array[left]>heap->array[largest])
        largest=left;
    if(right<heap->size&&heap->array[right]>heap->array[largest])
        largest=right;
    if(largest!=i)
    {
        swap(&heap->array[i],&heap->array[largest]);
        heapify(heap,largest);
    }
}

//Function to insert a new elements into the heap
void insert(Heap* heap,int value)
{
    if(heap->size==heap->capacity)
    {
        printf("Heap if full. cannot insert!\n");
        return;
    }
    int i=heap->size++;
    heap->array[i]=value;
    while(i!=0&&heap->array[i/2]<heap->array[i])
    {
        swap(&heap->array[i],&heap->array[i/2]);
        i=i/2;
    }
}

//Function to extract the max element from the heap-
int extractMax(Heap* heap)
{
    if(heap->size==0)
    {
        printf("heap is empty, cannot extract max element\n");
        return -1;
    }
    
    int max=heap->array[0];
    
    heap->array[0]=heap->array[heap->size-1];
    heap->size;
    
    heapify(heap,0);
    return max;
}

//Function to print the element of the heap
void printHeap(Heap* heap)
{
    printf("Heap elements: ");
    for(int i=0;i<heap->size;i++)
    {
        printf("%d ",heap->array[i]);
    }
    printf("\n");
}

//Example usage of the heap
int main()
{
    Heap* heap=createHeap(10);
    insert(heap,35);
    insert(heap,33);
    insert(heap,42);
    insert(heap,10);
    insert(heap,14);
    insert(heap,19);
    insert(heap,27);
    insert(heap,44);
    insert(heap,26);
    insert(heap,31);
    printHeap(heap);
    int max=extractMax(heap);
    printf("Max element: %d\n",max);
    return 0;
    
}