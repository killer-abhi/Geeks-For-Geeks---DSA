#include<bits/stdc++.h>
using namespace std;


void findUnion(int *arr1,int n1,int *arr2,int n2){
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);

    int i=0,j=0;

    while(i<n1&&j<n2){
        if(i>0&&arr1[i]==arr1[i-1]){
            i++;
            continue;
        }
        if(j>0&&arr2[j]==arr2[j-1]){
            j++;
            continue;
        }
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<"\t";
            i++;
        }
        if(arr1[i]>arr2[j]){
            cout<<arr2[j]<<"\t";
            j++;
        }
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<"\t";
            i++;
            j++;
        }
    }
}
int main()
{
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    findUnion(arr1,n1,arr2,n2);
    return(0);
}