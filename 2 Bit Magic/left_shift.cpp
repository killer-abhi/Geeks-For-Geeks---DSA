#include<bits/stdc++.h>
using namespace std;

int leftShift(int x,int count){
    return x<<count;
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<"Result ="<<leftShift(a,n);
    return(0);
}