#include <bits/stdc++.h>
using namespace std;

struct Node{
    int value;
    int arrPos;
    int pos;
    Node(int v,int k,int i){
        value=v;
        arrPos=k;
        pos=i;
    }
};
vector<int> mergeSortedArrays(vector<vector<int>> arrays)
{
    priority_queue<Node> pq;
    vector<int> res;
    for(int k=0;k<arrays.size();k++){
        Node x=Node(arrays[k][0],k,0);
        pq.push(x);
    }
    while(pq.size()!=0){
        Node top=pq.top();
        res.push_back(top.value);
        pq.pop();
        pq.push(Node(arrays[top.arrPos][top.pos+1],top.arrPos,top.pos+1));
    }
    return res;
}

int main()
{
    int k;
    cout << "Number of arrays :: ";
    cin >> k;
    vector<vector<int>> v;
    for (int i = 0; i < k; i++)
    {
        int n;
        cin>>n;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        v.push_back(arr);
    }

    vector<int> res=mergeSortedArrays(v);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\t";
    }

    return (0);
}