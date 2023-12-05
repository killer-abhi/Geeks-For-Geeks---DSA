#include<bits/stdc++.h>
using namespace std;

int findHash(string text,int start,int end){
    int hashValue=0;
    for(int i=start;i<=end;i++){
        hashValue+=(int)(text[i]);
    }
    return hashValue;
}

void rabinKarpAlgo(string text,string pat){
    int n= text.length();
    int m= pat.length();
    int reqHash=findHash(pat,0,m-1);
    for(int i=0;i<=n-m;i++){
        int curHash=findHash(text,i,i+m-1);
        cout<<reqHash<<'\t'<<curHash<<endl;
        if(curHash==reqHash){
            bool flag=true;
            for(int j=0;j<m;j++){
                if(pat[j]!=text[i+j]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<i<<'\t'<<endl;
            }
        }
    }
}

int main()
{
    string text,pat;
    cin>>text>>pat;
    rabinKarpAlgo(text,pat);
    return(0);
}