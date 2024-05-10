#include<bits/stdc++.h>
using namespace std;


// Naive Approach
void countingSort(int *arr,int k)
{
    int count[k];
    for(int i=0;i<k;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<k;i++)
    {
        count[arr[i]]++;
    }
    int index=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<count[i];j++)
        {
            arr[index]=i;
            index++;
        }
    }
}

//General Purpose Impelemtation

void countSort(int *arr,int n,int k){
    int count[k];
    for(int i=0;i<k;i++)
    {
        count[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<k;i++)
    {
        count[i]=count[i]+count[i-1];
    }

    int output[n];

    for(int i=n-1;i>0;i--){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }

    for(int i=0;i<n;i++)
    {
        arr[i]=output[i];
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
    int k;
    cin>>k;
    countSort(arr,n,k);
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return(0);
}