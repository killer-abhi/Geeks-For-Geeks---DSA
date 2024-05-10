#include<bits/stdc++.h>
using namespace std;

// Naive Solution

int findClosestGreater(int *arr,int ei){
    int max=arr[ei],pos=ei;
    for(int i=ei-1;i>=0;i--){
        if(arr[i]>max){
            max=arr[i];
            pos=i;
            break;
        }
    }
    return pos;
}

void stockSpan(int *arr,int n){
    int* spanArr=new int[n];
    for(int i=0;i<n;i++){
        int maxIndex=findClosestGreater(arr,i);
        if(maxIndex==i){
            spanArr[i]=i+1;
        }else{
            spanArr[i]=i-maxIndex;
        }
        cout<<spanArr[i]<<'\t';
    }
}

// Efficient Solution using Stack

void printSpan(int *arr,int n){
    stack<int> s;
    s.push(0);
    cout<<1<<'\t';

    for(int i=1;i<n;i++){
        while(s.empty()==false&&arr[s.top()]<=arr[i]){
            s.pop();
        }
        int span=s.empty()?i+1:i-s.top();
        cout<<span<<"\t";
        s.push(i);
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
    stockSpan(arr,n);
    cout<<endl;
    printSpan(arr,n);
    return(0);
}