#include<bits/stdc++.h>
using namespace std;

int longestCommonSumSubarray(int *arr1,int *arr2,int n){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[i]=arr1[i]-arr2[i];
    }

    unordered_set<int> mySet;
    int preSum=0;
    int res=0;

    for(int i=0;i<n;i++){
        preSum=preSum+temp[i];

        if(mySet.find(preSum)!=mySet.end()){
            res=i;
        }
        if(preSum==0){
            res=i+1;
        }
        mySet.insert(preSum);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Longest Common Subarray = "<<longestCommonSumSubarray(arr1,arr2,n);
    return(0);
}