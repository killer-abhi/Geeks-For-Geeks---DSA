#include<bits/stdc++.h>
using namespace std;

// Naive Solution
// Time Complexity: O(n^2)

int getMinDifference(int *arr,int n){
    int res=INT16_MAX;

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            res=min(res,abs(arr[i]-arr[j]));
        }
    }
    return res;
}

// Efficient Solution
// Time Complexity: O(nlogn)

int getMinimumDifference(int *arr,int n){
    sort(arr,arr+n);
    int res=INT16_MAX;
    for(int i=1;i<n;i++){
        res=min(res,abs(arr[i]-arr[i-1]));
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
    int res=getMinimumDifference(arr,n);
    cout<<res<<endl;
    return(0);
}