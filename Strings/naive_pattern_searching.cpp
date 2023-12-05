#include<bits/stdc++.h>
using namespace std;

void patternSearching(string &text,string &pat){
    int m=pat.length();
    int n=text.length();

    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(pat[j]!=text[i+j]){
                break;
            }
        }
        if(j==m){
            cout<<i<<'\t';
        }
        // Improved Naive Solution
        if(j==0){
            i++;
        }else{
            i=i+j;
        }
    }
}
int main()
{
    string str,pat;
    cin>>str>>pat;
    patternSearching(str,pat);
    return(0);
}