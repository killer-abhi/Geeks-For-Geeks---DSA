#include<bits/stdc++.h>
using namespace std;

bool findSubarray(int *arr,int n,int sum){
    unordered_set<int> mySet;

    int preSum=0;
    for(int i=0;i<n;i++){
        preSum=preSum+arr[i];
        if(mySet.find(preSum)!=mySet.end()){
            return true;
        }
        if(preSum==sum){
            return true;
        }
        mySet.insert(preSum);
    }
    return false;
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
    if(findSubarray(arr,n,sum)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return(0);
}