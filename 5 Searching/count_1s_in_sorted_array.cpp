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
int count1s(int *arr, int n)
{
    int first=firstOccurence(arr,n,0,n-1,1);
    if(first==-1){
        return 0;
    }else{
        return n-first;
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
    int res = count1s(arr, n);
    if (res == 0)
    {
        cout << "Element Not Found!";
    }
    else
    {
        cout << "1 Occurs " << res<<" times";
    }
    return (0);
}