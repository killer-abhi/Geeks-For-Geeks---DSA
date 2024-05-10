#include<bits/stdc++.h>
using namespace std;

int bitwiseAnd(int x,int y){
    return x&y;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Result ="<<bitwiseAnd(a,b);
    return(0);
}