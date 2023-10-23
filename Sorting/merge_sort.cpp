#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int *arr,int si,int ei,int mi){
    int res[ei-si+1];
    int count=0;
    int i=si,j=mi+1;
    while(i<=mi&&j<=ei){
        if(arr[i]<arr[j]){
            res[count]=arr[i];
            i++;
        }else{
            res[count]=arr[j];
            j++;
        }
        count++;
    }
    while(i<=mi){
        res[count]=arr[i];
        i++;
        count++;
    }
    while(j<=ei){
        res[count]=arr[j];
        j++;
        count++;
    }
    i=si;
    int k=0;
    while(i<=ei){
        arr[i]=res[k];
        i++;
        k++;
    }
}

void mergeSort(int *arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int mi=si+(ei-si)/2;
    mergeSort(arr,si,mi);
    mergeSort(arr,mi+1,ei);

    mergeArrays(arr,si,ei,mi);
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
    mergeSort(arr,0,n-1);
    cout<<"Sorted Elements are = ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<'\t';
    }
    return(0);
}