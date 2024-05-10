#include <bits/stdc++.h>
using namespace std;

int findMinVertex(vector<int> distance, vector<bool> visited, int n)
{

    int minVertex = -1;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && (minVertex == -1 || distance[i] < distance[minVertex]))
        {
            minVertex = i;
        }
    }
    return minVertex;
}

vector<int> dijikstraALgo(vector<int> *graph, int v, int sv)
{
    vector<bool> visited(v, false);
    vector<int> dist(v, INT_MAX);

    dist[sv] = 0;

    for (int i = 0; i < v - 1; i++)
    {
        int minDistVertex = findMinVertex(dist, visited, v);
        visited[minDistVertex] = true;
        for (int j = 0; j < v; j++)
        {
            if (!visited[j] && graph[minDistVertex][j] != 0)
            {
                dist[j] = min(dist[v], dist[minDistVertex] + graph[minDistVertex][j]);
            }
        }
    }
    return dist;
}