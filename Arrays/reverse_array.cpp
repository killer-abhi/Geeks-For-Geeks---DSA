#include<bits/stdc++.h>
using namespace std;

void reverseArray(int *arr,int n){
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverseArray(arr,n);
    cout<<"Reversed Array Is :: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    return(0);
}