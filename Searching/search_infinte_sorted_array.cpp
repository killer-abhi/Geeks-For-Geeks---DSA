#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int *arr,int n,int start,int end,int x){
    if(start>end){
        return -1;
    }
    int mid=(start+end)/2;
    if(arr[mid]==x){
        return mid;
    }
    if(arr[mid]>x){
        return BinarySearch(arr,n,start,mid-1,x);
    }
    else{
        return BinarySearch(arr,n,mid+1,end,x);
    }
    
}
int search(int *arr,int n,int x){
    if(arr[0]==x){
        return 0;
    }
    int i=1;
    while(arr[i]<x){
        i=i*2;
        if(arr[i]==x){
            return i;
        }
    }
    return BinarySearch(arr,n,(i/2)+1,i-1,x);
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
    return(0);
}