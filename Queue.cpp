#include "Queue.h"
#include<iostream>
using namespace std;
Queue::Queue( int n )
{
    size = n;
    intQueue = new int[size];
    count = 0;
    front = 0;
    rear = -1;
    cout << "A Queue of size " << size << " is created." <<endl;
}
Queue::~Queue()
{
    cout << "A queue of size " << size << " is destroyed." <<endl;
}
void Queue::enqueue( int a )
{
    intQueue[rear+1] = a;
    count++;
    rear++;
}
int Queue::dequeue()
{
    int a = 0;
    a = intQueue[0];
    for ( int i = 0; i < count-1; i++ )
    {
        intQueue[i] = intQueue[i+1];
    }
    count--;
    rear--;
    return a;
}
int Queue::peek()
{
    return intQueue[front];
}
int Queue::getCount()
{
    return count;
}
int Queue::getSize()
{
    return size;
}
bool Queue::isEmpty()
{
    if ( count == 0 )
        return true;
    return false;
    
}
bool Queue::isFull()
{
    if ( count == size )
    {
        return true;    
    }
    else
    {
        return false;
    }
}
void Queue::clearQueue()
{
    delete []intQueue;
    count = 0;
    rear = -1;
    front = 0;
    intQueue = new int[size];
}
void Queue::printQueue()
{
    for ( int i = 0 ; i < count ; i++ )
    {
        cout << intQueue[i] << " ";
    }
    cout << endl;
}