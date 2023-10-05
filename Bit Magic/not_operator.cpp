#include<bits/stdc++.h>
using namespace std;

int bitwiseNOT(int x){
    return ~x;
}
int main()
{
    int x;
    cin>>x;
    cout<<"Result ="<<bitwiseNOT(x);
    return(0);
}