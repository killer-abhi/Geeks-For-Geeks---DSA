#include<bits/stdc++.h>
using namespace std;

//Question :: Given an array of n integers where each value represents number of chocolates in a packet.
//Each packet can have variable number of chocolates. There are m students, the task is to distribute chocolate packets such that:
//1. Each student gets one packet.
//2. The difference between the number of chocolates in packet with maximum chocolates and packet with minimum chocolates given to the students is minimum.

int minDifference(int *arr,int n,int m){
    if(m>n){
        return(-1);
    }
    sort(arr,arr+n);
    int res=arr[m-1]-arr[0];

    for(int i=1;(i+m-1)<n;i++){
        res=min(res,arr[i+m-1]-arr[i]);
    }
    return(res);
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
    int m;
    cin>>m;
    cout<<minDifference(arr,n,m);   
    return(0);
}