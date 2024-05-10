#include<bits/stdc++.h>
using namespace std;

void printClosest(int *arr,int n,int x,int k){
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<n;i++){
        pair<int,int> p;
        p.first=arr[i];
        p.second=abs(arr[i]-x);
        pq.push(p);
    }
    for(int i=0;i<k;i++){
        cout<<pq.top().first<<"\t";
        pq.pop();
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
    int x;
    cout<<"Enter x ::";
    cin>>x;
    int k;
    cout<<"Enter k ::";
    cin>>k;
    printClosest(arr,n,x,k);
    return(0);
}