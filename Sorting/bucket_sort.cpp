#include<bits/stdc++.h>
using namespace std;

void bucketSort(int *arr,int n,int bucketCount){
    int max_val=arr[0];
    for(int i=1;i<n;i++){
        max_val=max(max_val,arr[i]);
    }
    max_val++;

    vector<int> b[bucketCount];
    for(int i=0;i<n;i++){
        int bi=(bucketCount*arr[i])/max_val;
        b[bi].push_back(arr[i]);
    }
    for(int i=0;i<bucketCount;i++){
        sort(b[i].begin(),b[i].end());
    }
    int index=0;
    for(int i=0;i<bucketCount;i++){
        for(int j=0;j<b[i].size();j++){
            arr[index]=b[i][j];
            index++;
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
    int bucketCount;
    cin>>bucketCount;
    bucketSort(arr,n,bucketCount);
    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return(0);
}