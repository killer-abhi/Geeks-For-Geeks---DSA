#include<bits/stdc++.h>
using namespace std;

int bitwiseOr(int x,int y){
    return x|y;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Result ="<<bitwiseOr(a,b);
    return(0);
}