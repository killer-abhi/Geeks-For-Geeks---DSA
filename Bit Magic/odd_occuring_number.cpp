#include<bits/stdc++.h>
using namespace std;

int findOddOccuring(int *arr,int n){
    int res=0;
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    return res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Result ="<<findOddOccuring(arr,n);
    return(0);
}