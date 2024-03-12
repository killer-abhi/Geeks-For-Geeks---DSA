#include<bits/stdc++.h>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        cout<<s.top()<<"\t";
        s.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(12);
    q.push(14);
    q.push(20);
    q.push(25);
    q.push(30);
    reverseQueue(q);
    return(0);
}