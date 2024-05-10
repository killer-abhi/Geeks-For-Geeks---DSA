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
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int res=lomutoPartition(arr,0,n-1);
    cout<<"Pivot element is "<<arr[res]<<"  at Index :: "<<res<<endl;
    return(0);
}