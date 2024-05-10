#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        pq.push(element);
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return(0);
}