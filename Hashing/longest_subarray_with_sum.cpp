#include<bits/stdc++.h>
using namespace std;

int findLongestSubarray(int *arr,int n,int sum){

    unordered_map<int,int> myMap;
    int preSum=0;
    int res=0;
    for(int i=0;i<n;i++){
        preSum+=arr[i];
        if(preSum==sum){
            res=i+1;
        }
        if(myMap.find(preSum)==myMap.end()){
            myMap.insert({preSum,i});
        }
        if(myMap.find(preSum-sum)!=myMap.end()){
            res=max(res,i-myMap[preSum-sum]);
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
    int sum;
    cin>>sum;
    cout<<"Longest Subarray Size = "<<findLongestSubarray(arr,n,sum);
    return(0);
}