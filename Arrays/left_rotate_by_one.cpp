#include <bits/stdc++.h>
using namespace std;

void leftRotateByK(int *arr, int n, int k)
{
    int count = 0;
    for (int j = 0; j < k; j++)
    {
        int first = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = first;
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
    leftRotateByK(arr, n, 2);
    cout << "Rotated Elements are = " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return (0);
}