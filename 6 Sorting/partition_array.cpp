#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int si,int ei,int pi)
{
    int pivot=arr[pi];
    int pos=-1;

    for(int i=si;i<=ei;i++)
    {
        if(arr[i]<=pivot)
        {
            pos++;
        }
    }
    cout<<pos<<endl;
    swap(arr[pi],arr[si+pos]);

    int i=si,j=ei;

    while(i<pos&&j>pos){
        if(arr[i]<pivot){
            i++;
        }
        else if(arr[i]>pivot){
            swap(arr[i],arr[j]);
            j--;
        }
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
    int pi;
    cin>>pi;
    partition(arr,0,n-1,pi);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return(0);
}