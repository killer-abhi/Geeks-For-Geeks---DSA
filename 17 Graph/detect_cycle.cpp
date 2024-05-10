#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> *adj,int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool detectCycle(vector<int> *adj,int s,bool *visited,int parent){
    visited[s]=true;
    for(int u:adj[s]){
        if(!visited[u]){
            if(detectCycle(adj,u,visited,s)){
                return true;
            }
        }
        else if(u!=parent){
            return true;
        }
    }
    return false;
}
bool isCyclePresent(vector<int> *adj,int v){

    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for(int i=0;i<v;i++){
        if(!visited[i]){
            if(detectCycle(adj,i,visited,-1)){
                return true;
            }
        }
    }
    return false;
}