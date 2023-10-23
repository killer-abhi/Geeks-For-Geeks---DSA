#include<bits/stdc++.h>
using namespace std;

int maxGuests(int *arr,int *dep,int n){
    sort(arr,arr+n);
    sort(dep,dep+n);

    int i=1,j=0,count=1;
    int res=1;
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            count++;
            i++;
        }
        else{
            count--;
            j++;
        }
        res=max(res,count);
    }
    return(res);
}

int main()
{
    int n;
    cin>>n;
    int arr[n],dep[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++){
        cin>>dep[j];
    }
    int res=maxGuests(arr,dep,n);
    cout<<"Maximum number of guests are :: "<<res<<endl;
    
    return(0);
}