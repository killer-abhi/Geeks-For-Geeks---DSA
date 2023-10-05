#include<bits/stdc++.h>
using namespace std;

int checkPower(int x){
    if(x==0){
        return 0;
    }
    return ((x&(x-1))==0);
}
int main()
{
    int x;
    cin>>x;
    if(checkPower(x)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return(0);
}