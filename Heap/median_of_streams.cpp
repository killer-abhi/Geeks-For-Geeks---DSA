#include<bits/stdc++.h>
using namespace std;

vector<int> findMedians(int *arr,int n){
    priority_queue<int> s;
    priority_queue<int,vector<int>,greater<int>> g;
    s.push(arr[0]);
    vector<int> medians;
    medians.push_back(arr[0]);

    for(int i=1;i<n;i++){
        int x=arr[i];
        if(s.size()>g.size()){
            if(s.top()>x){
                g.push(s.top());
                s.pop();
                s.push(x);
            }
            else{
                g.push(x);
            }
            medians.push_back((s.top()+g.top()/2.0));
        }
        else{
            if(x<s.top()){
                s.push(x);
            }
            else{
                g.push(x);
                s.push(g.top());
                g.pop();
            }
            medians.push_back(s.top());
        }
    }
    return medians;
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
    vector<int> res=findMedians(arr,n);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\t";
    }

    return(0);
}