#include<bits/stdc++.h>
using namespace std;

void fillLPS(string str,int *lps){
    int n=str.length();
    int len=0;

    int i=1;
    while(i<n){
        if(str[i]==str[len]){
            len++;
            lps[i]=len;
            i++;
        }else{
            if(len==0){
                lps[i]=0;
                i++;
            }else{
                len=lps[len-1];
            }
        }
    }
}
void KMP(string text,string pat){
    int n=text.length();
    int m=pat.length();
    int lps[m];
    fillLPS(pat,lps);

    int i=0,j=0;

    while(i<n){
        if(pat[j]==text[i]){
            i++;
            j++;
        }
        if(j==m){
            cout<<i-j<<"\t";
            j=lps[j-1];
        }
        else if(i<n&&pat[j]!=text[i]){
            if(j==0){
                i++;
            }else{
                j=lps[j-1];
            }
        }
    }
}
int main()
{
    string text,pat;
    cin>>text>>pat;
    KMP(text,pat);   
    return(0);
}