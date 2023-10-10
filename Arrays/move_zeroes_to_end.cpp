#include<bits/stdc++.h>
using namespace std;

void moveZeroesToEnd(int *arr,int n){

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
}

void moveZeroesToEnd(int *arr,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    moveZeroesToEnd(arr,n);
    cout<<"Fixed Elements are = "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return(0);
}