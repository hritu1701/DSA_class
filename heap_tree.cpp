#include<iostream>
using namespace std;

#define MAX_HEAP_SIZE 100
int heap[MAX_HEAP_SIZE];
int heap_size=0;

void swap(int a,int b)
{
    int temp =*a;

}
void insert(int value)
{
    if(heap_size>=MAX_HEAP_SIZE)
    {
        cout<<"Heap is full.Cannot insert"<<endl;
        return;
    }
    heap[heap_size]=value;
    max_heap[heap_size];
    
}
