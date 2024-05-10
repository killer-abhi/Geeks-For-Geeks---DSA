#include <bits/stdc++.h>
using namespace std;

int findLongestSubarray(int *arr, int n)
{
    unordered_set<int> mySet;
    int preSum = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
            preSum += arr[i];
        if (arr[i] == 0)
        {
            preSum += -1;
        }
        if (preSum == 0)
        {
            res = i + 1;
        }
        if(mySet.find(preSum)!=mySet.end()){
            res=i;
        }
        mySet.insert(preSum);
    }
    return res;
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
    cout << "Longest Subarray Size = " << findLongestSubarray(arr, n);
    return (0);
}