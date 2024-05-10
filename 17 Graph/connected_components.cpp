#include <bits/stdc++.h>
using namespace std;

void connectedComponents(vector<int> *adj, int sv, bool *visited)
{
    cout << sv << "\t";
    visited[sv] = true;
    for (int j : adj[sv])
    {
        if (!visited[j])
        {
            connectedComponents(adj,j, visited);
        }
    }
}

void findComponents(vector<int> *adj, int v)
{
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i]=false;
    }
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            connectedComponents(adj, i, visited);
        }
        cout << endl;
    }
}