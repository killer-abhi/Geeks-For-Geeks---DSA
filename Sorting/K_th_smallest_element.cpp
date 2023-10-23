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

//Naive Solution 
// Time Complexity :: O(nlogn)

int smallestElement(int *arr,int n,int k){
    sort(arr,arr+n);
    return arr[k-1];
}

//Efficient Solution
// Time Complexity :: O(nlogn)

int kthSmallest(int *arr,int n,int k){
    int si=0,ei=n-1;

    while(si<=ei){
        int p=lomutoPartition(arr,si,ei);
        if(p==k-1){
            return arr[p];
        }
        else if(p>k-1){
            ei=p-1;
        }
        else{
            si=p+1;
        }
    }

    return -1;
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
    int res=smallestElement(arr,n,k);
    if(res==-1){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<res<<endl;
    }
    return(0);
}