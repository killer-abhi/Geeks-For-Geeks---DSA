#include<bits/stdc++.h>
using namespace std;

void nextGreater(int *arr,int n){
    stack<int> s;
    stack<int> res;
    s.push(arr[n-1]);
    for(int i=n-1;i>=0;i--){
        while(s.empty()==false&&s.top()<=arr[i]){
            s.pop();
        }
        int greater=s.empty()?-1:s.top();
        res.push(greater);
        s.push(arr[i]);
    }
    while (!res.empty())
    {
        cout<<res.top()<<'\t';
        res.pop();
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
    nextGreater(arr,n);
    return(0);
}