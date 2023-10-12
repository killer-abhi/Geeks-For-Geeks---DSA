#include<bits/stdc++.h>
using namespace std;

int findMaxSubArraySum(int *arr,int n){
    int res=arr[0];
    int maxEnding=arr[0];

    for(int i=1;i<n;i++){
        maxEnding=max(maxEnding+arr[i],arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum SubArray Sum = "<<findMaxSubArraySum(arr,n);
    return(0);
}