#include <bits/stdc++.h>
using namespace std;

class minHeap
{
    vector<int> arr;

    int getSize()
    {
        return arr.size();
    }
    bool isEmpty()
    {
        return arr.empty();
    }
    int getMin()
    {
        if (isEmpty())
        {
            return 0;
        }
        return arr[0];
    }
    void insert(int x)
    {
        arr.push_back(x);
        int childIndex = getSize() - 1;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;
            if (arr[childIndex] > arr[parentIndex])
            {
                swap(arr[childIndex], arr[parentIndex]);
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }
    void decrease(int x,int index)
    {
        arr[index]=x;
        int childIndex = index;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;
            if (arr[childIndex] > arr[parentIndex])
            {
                swap(arr[childIndex], arr[parentIndex]);
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }
    void minHeapify(int i)
    {
        int leftChildIndex = (2 * i) + 1;
        int rightChildIndex = (2 * i) + 2;

        int minIndex = i;
        if (leftChildIndex < getSize() && arr[minIndex] > arr[leftChildIndex])
        {
            minIndex = leftChildIndex;
        }
        if (rightChildIndex < getSize() && arr[rightChildIndex] < arr[minIndex])
        {
            minIndex = rightChildIndex;
        }
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
            minHeapify(minIndex);
        }
    }
    int extractMin()
    {
        int ans = arr[0];
        int lastIndex = getSize() - 1;
        swap(arr[0], arr[lastIndex]);
        arr.pop_back();
        minHeapify(0);
        return ans;
    }
    void deleteKey(int index){
        int lastIndex=getSize()-1;
        swap(arr[index],arr[lastIndex]);
        arr.pop_back();
        minHeapify(index);
    }
};