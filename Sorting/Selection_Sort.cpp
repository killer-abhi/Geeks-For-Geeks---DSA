#include <bits/stdc++.h>
using namespace std;

void Selection_Sort(int *arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int pos = i;
        int small = arr[i];
        int j = i+1;
        while (j <n)
        {
            if (arr[j] < small)
            {
                small = arr[j];
                pos = j;
            }
            j++;
        }
        swap(arr[i],arr[pos]);
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
    Selection_Sort(arr, n);
    cout << "Sorted Array Is :: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\t';
    }

    return (0);
}