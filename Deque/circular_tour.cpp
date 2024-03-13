#include <bits/stdc++.h>
using namespace std;

int firstPetrolPump(int *petrol, int *dist, int n)
{
    int start = 0;
    int cur_pet = 0, prev_pet = 0;
    for (int i = 0; i < n; i++)
    {
        cur_pet += petrol[i] - dist[i];
        if (cur_pet < 0)
        {
            start = i + 1;
            prev_pet += cur_pet;
            cur_pet = 0;
        }
    }
    return (cur_pet + prev_pet) >= 0 ? start + 1 : -1;
}

int main()
{
    int n;
    cin >> n;
    int petrol[n];
    for (int i = 0; i < n; i++)
    {
        cin >> petrol[i];
    }
    int dist[n];
    for (int i = 0; i < n; i++)
    {
        cin >> dist[i];
    }
    cout << firstPetrolPump(petrol, dist, n);
    return (0);
}