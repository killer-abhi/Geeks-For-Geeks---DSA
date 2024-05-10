#include <bits/stdc++.h>
using namespace std;

struct Queue
{
    int *arr;
    int size;
    int cap;

    Queue(int s)
    {
        cap = s;
        arr = new int[cap];
        size = 0;
    }
    bool isFull()
    {
        return size == cap;
    }
    bool isEmpty()
    {
        return size == 0;
    }
    void enqueue(int key)
    {
        if (isFull())
        {
            cout << "Queue Full !";
        }
        else
        {
            arr[size] = key;
            size++;
        }
    }
    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty!";
        }
        else
        {
            for(int i=0;i<size-1;i++){
                arr[i]=arr[i+1];
            }
            size--;
        }
    }
    int getSize()
    {
        return size;
    }
    int getFront()
    {
        return arr[0];
    }
    int getRear()
    {
        return arr[size-1];
    }
};

int main()
{
    Queue q(10);
    q.enqueue(5);
    q.enqueue(15);
    q.enqueue(25);
    q.dequeue();
    cout<<q.getFront();
    return (0);
}