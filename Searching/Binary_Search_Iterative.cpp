#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int *arr,int n,int x){
    int start=0,end=n-1;
    int mid=n/2;
    while(start!=end){
        int mid=(start+end)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            end=mid-1;
        }else{
            start=mid+1;
        }
    }
    return -1;
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
    int x;
    cout<<"Enter Element to be Searched :: ";
    cin>>x;
    int res=BinarySearch(arr,n,x);
    if(res==-1){
        cout<<"Element Not Found!";
    }else{
        cout<<"Element Found at Index ="<<res;
    }
    return(0);
}