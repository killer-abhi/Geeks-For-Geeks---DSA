#include<bits/stdc++.h>
using namespace std;

bool checkBit(int x,int n){
    if(x&(1<<(n-1))!=0){
        return true;
    }
    return false;
}
int main()
{
    int x,n;
    cin>>x>>n;
    if(checkBit(x,n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return(0);
}