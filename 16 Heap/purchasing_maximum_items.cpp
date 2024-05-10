#include<bits/stdc++.h>
using namespace std;

int findItems(int *arr,int n,int sum){
    priority_queue<int,vector<int>,greater<int>> pq;
    int res=0;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }
    for(int i=0;i<pq.size();i++){
        if(pq.top()<=sum){
            res++;
            sum=sum-pq.top();
            pq.pop();
        }
    }
    return res;
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
    int sum;
    cout<<"Enter Sum :: ";
    cin>>sum;
    cout<<"Required Number of Items = "<<findItems(arr,n,sum);
    return(0);
}