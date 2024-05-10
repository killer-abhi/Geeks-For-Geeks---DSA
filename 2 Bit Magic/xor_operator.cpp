#include<bits/stdc++.h>
using namespace std;

int bitwiseXOR(int x,int y){
    return x^y;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<"Result ="<<bitwiseXOR(a,b);
    return(0);
}