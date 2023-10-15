#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int *arr, int n, int start, int end, int x)
{
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == x)
    {
        if (arr[mid - 1] == x)
        {
            return firstOccurence(arr, n, start, mid - 1, x);
        }
        return mid;
    }
    if (arr[mid] > x)
    {
        return firstOccurence(arr, n, start, mid - 1, x);
    }
    else
    {
        return firstOccurence(arr, n, mid + 1, end, x);
    }
}
int lastOccurence(int *arr, int n, int start, int end, int x)
{
    if (start > end)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (arr[mid] == x)
    {
        if (arr[mid + 1] == x)
        {
            return lastOccurence(arr, n, start+1, mid + 1, x);
        }
        else{
        return mid;
        }
    }
    if (arr[mid] > x)
    {
        return lastOccurence(arr, n, start, mid - 1, x);
    }
    else
    {
        return lastOccurence(arr, n, mid + 1, end, x);
    }
}

int countOccurence(int *arr, int n, int x)
{
    int first=firstOccurence(arr,n,0,n-1,x);
    if(first==-1){
        return 0;
    }else{
        return lastOccurence(arr,n,0,n-1,x)-first+1;
    }

}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter Element to be Searched :: ";
    cin >> x;
    int res = countOccurence(arr, n, x);
    if (res == 0)
    {
        cout << "Element Not Found!";
    }
    else
    {
        cout << "Occurences of Element =" << res;
    }
    return (0);
}