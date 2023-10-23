#include<bits/stdc++.h>
using namespace std;

int lomutoPartition(int *arr,int si,int ei){
    int pivot=arr[ei];
    int i=si-1;

    for(int j=si;j<ei;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[ei]);

    return(i+1);
}

void quickSort(int *arr,int si,int ei){
    if(si>=ei){
        return;
    }

    int pi=lomutoPartition(arr,si,ei);
    quickSort(arr,si,pi-1);
    quickSort(arr,pi+1,ei);
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
    quickSort(arr,0,n-1);
    cout<<"Sorted Array Is :: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return(0);
}