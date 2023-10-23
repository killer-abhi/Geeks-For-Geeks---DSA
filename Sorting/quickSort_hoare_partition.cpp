#include<bits/stdc++.h>
using namespace std;

int hoarePartition(int *arr,int si,int ei){
    int pivot=arr[si];
    int i=si-1;
    int j=ei+1;

    while(true){
        do{
            i++;
        }while(arr[i]<pivot);

        do{
            j--;
        }while(arr[j]>pivot);

        if(i>=j){
            return(j);
        }
        swap(arr[i],arr[j]);
    }
}

void quickSort(int *arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int pi=hoarePartition(arr,si,ei);
    quickSort(arr,si,pi);
    qucikSort(arr,pi+1,ei);
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
    quickSort(arr,0,n-1);
    cout<<"Sorted Array Is :: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return(0);
}