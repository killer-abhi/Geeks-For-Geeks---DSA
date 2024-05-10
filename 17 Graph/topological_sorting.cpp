#include<bits/stdc++.h>
using namespace std;

int countIndegree(vector<int> *adj,int v){
    int count=0;
    for(int i=0;i<v;i++){
        for(int j=0;j<adj[i].size();j++){
           if(adj[i][j]==v){
            count++;
           }
        }
    }
    return count;
}

void topologicalSorting(vector<int> *adj,int v,int sv){
    int indegree[v];
    for(int i=0;i<v;i++){
        indegree[i]=countIndegree(adj,i);
    }

    queue<int> q;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int u=q.front();
        cout<<u<<"\t";
        q.pop();
        for(int v:adj[u]){
            indegree[v]--;
            if(indegree[v]==0){
                q.push(v);
            }
        }
    }

}