#include<bits/stdc++.h>
using namespace std;

void countSort(int *arr,int n,int exp){
    int k=10;
    int count[k];
    for(int i=0;i<k;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[(arr[i]/exp)%10]++;
    }
    for(int i=1;i<k;i++)
    {
        count[i]=count[i]+count[i-1];
    }

    int output[n];

    for(int i=n-1;i>0;i--){
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
    }
}

void radixSort(int *arr,int n){
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    for(int exp=1;max/exp>0;exp=exp*10)
    {
        countSort(arr,n,exp);
    }
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
    radixSort(arr,n);
    cout<<"Sorted Array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return(0);
}