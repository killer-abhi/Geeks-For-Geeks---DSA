#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    unordered_set<int> mySet;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mySet.insert(x);
    }    
    cout<<"\n \nDistinct Elements = "<<mySet.size();
    return(0);
}