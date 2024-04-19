#include<bits/stdc++.h>
using namespace std;

void printKLargest(int *arr,int n,int k){
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    for(int i=0;i<k;i++){
        cout<<pq.top()<<"\t";
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
    int k;
    cin>>k;
    printKLargest(arr,n,k);
    return(0);
}