#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> *adj,int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[],int s,bool *visited){
    queue<int> q;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        cout<<u<<"\t";
        for(int v:adj[u]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
        }
    }
}

void disBFS(vector<int> adj[],int v){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            BFS(adj,i,visited);
        }
    }
}

int main()
{
    int v=5;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,2,4);
    return(0);
}