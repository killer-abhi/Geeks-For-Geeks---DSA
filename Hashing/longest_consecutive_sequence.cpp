#include<bits/stdc++.h>
using namespace std;

int longestSubsequence(int *arr,int n){
    sort(arr,arr+n);

    int maxLength=1;
    int count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1]+1){
            count++;
        }
        else{
            maxLength=max(maxLength,count);
            count=1;
        }
    }
            maxLength=max(maxLength,count);
    return maxLength;
}

int findLongest(int *arr,int n){
    unordered_set<int> mySet(arr,arr+n);

    int res=0;
    for(int i=0;i<n;i++){
        if(mySet.find(arr[i]-1)==mySet.end()){
            int cur=1;
            while(mySet.find(arr[i]+cur)!=mySet.end()){
                cur++;
            }
            res=max(res,cur);
        }
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
    cout<<"Longest Consecutive Subsequence = "<<findLongest(arr,n);
    return(0);
}