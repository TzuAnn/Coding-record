#include<iostream>
#include<vector>
#include"Queue.cpp"
using namespace std;
int main ()
{
    int x;
    int Qsize;
    int number;
    int num;
    int ideal;
    int ar;
    cin >> Qsize;
    cin >> number;
    Queue iQueue(Qsize);
    Queue aQueue(Qsize);
    for ( int n = 0 ; n < number ; n++ )
    {
        int time = 0;
        cin >> num;
        cout << "Test " << n+1 << ':' <<endl;
        for ( int i = 0 ; i < num ; i++ )
        {
            cin >> x;
            iQueue.enqueue(x);
        }
        for ( int j = 0 ; j < num ; j++ )
        {
            cin >> x;
            aQueue.enqueue(x);
        }
        cout << endl;
        while ( !iQueue.isEmpty() )
        {
            if ( aQueue.peek() == iQueue.peek() )
            {
                aQueue.dequeue();
                iQueue.dequeue();
                time = time + 2 ;
            }
            if ( aQueue.peek() != iQueue.peek() )
            {
                aQueue.enqueue(aQueue.dequeue());
                aQueue.printQueue();
                time++;
            }
        }
        cout << time << endl;
        aQueue.clearQueue();
        iQueue.clearQueue();
    }
}