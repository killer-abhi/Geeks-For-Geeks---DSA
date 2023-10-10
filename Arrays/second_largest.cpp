#include<bits/stdc++.h>
using namespace std;

int findSecondLargest(int *arr,int n){
    int pos=0;
    int max=arr[0];
    int secondMax=max;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            secondMax=max;
            max=arr[i];
        }
    }
    return secondMax;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Second Largest Element = "<<findSecondLargest(arr,n);
    return(0);
}