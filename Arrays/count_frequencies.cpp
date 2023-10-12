#include<bits/stdc++.h>
using namespace std;

void countFrequencies(int *arr,int n){
    
    sort(arr,arr+n);
    int counter=arr[0];
    int count=1;
    for(int i=1;i<=n;i++){
        if(arr[i]!=counter){
            cout<<"Frequency of "<<counter<<" = "<<count<<endl;
            counter=arr[i];
            count=1;
        }
        else{
            count++;
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
    countFrequencies(arr,n);
    return(0);
}