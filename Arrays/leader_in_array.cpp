// Given an array A of positive integers.
//  Your task is to find the leaders in the array. 
//  An element of array is leader if it is greater than or equal 
//  to all the elements to its right side. 
//  The rightmost element is always a leader. 

 

#include<bits/stdc++.h>
using namespace std;


void findLeaders(int *arr,int n){
    cout<<"Leader Elements are = ";
    int max=arr[n-1];
    for(int i=n-1;i>=0;i--){
        if(arr[i]>=max){
            max=arr[i];
            cout<<max<<endl;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findLeaders(arr,n);
    return(0);
}