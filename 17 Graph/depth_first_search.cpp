#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> *adj, int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printDFS(vector<int> *adj, int s, bool *visited)
{
    cout << s << "\t";
    visited[s] = true;
    for (int u : adj[s])
    {
        if (!visited[u])
        {
            printDFS(adj, u, visited);
        }
    }
}

void DFS(vector<int> *adj, int s, int v)
{
    bool *visited = new bool[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            printDFS(adj, i, visited);
        }
    }
}

int main()
{
    int v = 5;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    return (0);
}