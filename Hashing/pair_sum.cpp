#include<bits/stdc++.h>
using namespace std;

bool isPairSum(int *arr,int n,int sum){
    unordered_set<int> mySet;
    for(int i=0;i<n;i++){
        if(mySet.find(sum-arr[i])!=mySet.end()){
            return true;
        }
        mySet.insert(arr[i]);
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
    if(isPairSum(arr,n,sum)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return(0);
}