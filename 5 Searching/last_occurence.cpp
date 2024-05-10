#include <bits/stdc++.h>
using namespace std;

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
    int res = lastOccurence(arr, n, 0, n - 1, x);
    if (res == -1)
    {
        cout << "Element Not Found!";
    }
    else
    {
        cout << "Element Last Found at Index =" << res;
    }
    return (0);
}