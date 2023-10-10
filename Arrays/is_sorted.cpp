#include <bits/stdc++.h>
using namespace std;

bool checkAscending(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
bool checkDescending(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i-1] < arr[i])
        {
            return false;
        }
    }
    return true;
}
bool isSorted(int *arr,int n){
    int max=arr[0];
    int pos=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
            pos=i;
        }
    }

    if(pos==0||pos==n-1){
        return true;
    }
    return false;
}
// bool isSorted(int *arr, int n)
// {
//     cout << checkAscending << checkDescending;
//     return checkAscending || checkDescending;
// }
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (isSorted(arr, n))
    {
        cout << "Sorted Array";
    }
    else
    {
        cout << "Array is Not Sorted";
    }
    return (0);
}