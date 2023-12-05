#include<bits/stdc++.h>
using namespace std;

bool checkRotations(string text,string rotStr){
    if(text.length()!=rotStr.length()){
        return false;
    }
    return ((text+text).find(rotStr)!=string::npos);
}

int main()
{
    string text,rot;
    cin>>text>>rot;
    if(checkRotations(text,rot)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return(0);
}