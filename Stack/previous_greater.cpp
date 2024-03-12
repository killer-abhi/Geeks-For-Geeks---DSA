#include<bits/stdc++.h>
using namespace std;

void previousGreater(int *arr,int n){
    stack<int> s;
    s.push(arr[0]);
    for(int i=0;i<n;i++){
        while(s.empty()==false&&s.top()<=arr[i]){
            s.pop();
        }
        int greater=s.empty()?-1:s.top();
        cout<<greater<<'\t';
        s.push(arr[i]);
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
    previousGreater(arr,n);
    
    return(0);
}