#include<bits/stdc++.h>
using namespace std;

int majorityElement(int *arr,int n){
    int pos=0,count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[pos]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            pos=i;
            count=1;
        }
    }

    count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[pos]){
            count++;
        }
    }
    if(count<=n/2){
        return -1;
    }
    return pos;
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
    int res=majorityElement(arr,n);
    if(res==-1){
        cout<<"No Majority Element Found";
    }
    else{
        cout<<"Majority Element - "<<arr[res];
    }
    return(0);
}