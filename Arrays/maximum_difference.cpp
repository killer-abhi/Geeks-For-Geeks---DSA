#include<bits/stdc++.h>
using namespace std;

int maxDifference(int *arr,int n){
    int res=arr[1]-arr[0];
    int minValue=arr[0];
    for(int i=1;i<n;i++){
        res=max(res,arr[i]-minValue);
        minValue=min(minValue,arr[i]);
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
    cout<<"Maximum Difference of Two Elements :: "<<maxDifference(arr,n);
    return(0);
}