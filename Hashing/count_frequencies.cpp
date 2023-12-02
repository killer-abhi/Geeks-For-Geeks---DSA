#include <bits/stdc++.h>
using namespace std;

void countFrequencies(int *arr,int n){
    unordered_map<int,int> myMap;
    for(int i=0;i<n;i++){
        myMap[arr[i]]++;
    }

    for(auto it:myMap){
        cout<<it.first<<"\t"<<it.second<<endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    countFrequencies(arr,n);
    return (0);
}