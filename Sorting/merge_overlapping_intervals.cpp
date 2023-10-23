#include<bits/stdc++.h>
using namespace std;

// Efficient Approach
// Time Complexity: O(nlogn)

bool myComp(pair<int,int> a,pair<int,int> b){
    return a.first<b.first;
}

void mergeOverlapping(pair<int,int> *arr,int n){
    sort(arr,arr+n,myComp);
    int res=0;
    for(int i=1;i<n;i++){
        if(arr[res].second>=arr[i].first){
            arr[res].second=max(arr[res].second,arr[i].second);
            arr[res].first=min(arr[res].first,arr[i].first);
        }
        else{
            res++;
            arr[res]=arr[i];
        }
    }
    for(int i=0;i<=res;i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    pair<int,int> arr[n];
    for(int i=0;i<n;i++)
    {   
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    mergeOverlapping(arr,n);
    return(0);
}