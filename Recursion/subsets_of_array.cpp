#include<bits/stdc++.h>
using namespace std;

void arraySubsets(int *arr,int n,vector<int> curSubset,int pos=0){
    if(pos==n){
        for(int i=0;i<curSubset.size();i++){
            cout<<curSubset[i]<<"\t";
        }
        cout<<endl;
        return;
    }
    arraySubsets(arr,n,curSubset,pos+1);
    curSubset.push_back(arr[pos]);
    arraySubsets(arr,n,curSubset,pos+1);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> subset;
    arraySubsets(arr,n,subset,0);
    return(0);
}