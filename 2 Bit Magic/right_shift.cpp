#include<bits/stdc++.h>
using namespace std;

int rightShift(int x,int count){
    return x>>count;
}
int main()
{
    int a,n;
    cin>>a>>n;
    cout<<"Result ="<<rightShift(a,n);
    return(0);
}