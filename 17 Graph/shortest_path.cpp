#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> *adj,int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void findShortestPath(vector<int> *adj,int v,int sv){
    int *dist=new int[v];
    bool *visited=new bool[v];
    for(int i=0;i<v;i++){
        dist[i]=INT_MAX;
        visited[i]=false;
    }
    queue<int> q;
    dist[sv]=0;
    q.push(sv);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v: adj[u]){
            if(!visited[v]){
                dist[v]=dist[u]+1;
                visited[v]=true;
                q.push(v);
            }
        }
    }

    for(int i=0;i<v;i++){
        cout<<dist[i]<<"\t";
    }
}

int main()
{
    int v=5;
    vector<int> adj[5];
    addEdge(adj,0,1);
    addEdge(adj,1,3);
    return(0);
}