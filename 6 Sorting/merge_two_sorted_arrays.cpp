#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int *arr1,int n1,int *arr2,int n2){
    int res[n1+n2];
    int count=0;
    int i=0,j=0;
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            res[count]=arr1[i];
            i++;
        }else{
            res[count]=arr2[j];
            j++;
        }
        count++;
    }
    while(i<n1){
        res[count]=arr1[i];
        i++;
        count++;
    }
    while(j<n2){
        res[count]=arr2[j];
        j++;
        count++;
    }
    cout<<"Merged Array is :: ";

    for(int k=0;k<(n1+n2);k++){
        cout<<res[k]<<'\t';
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
    mergeArrays(arr1,n1,arr2,n2);
    return(0);
}