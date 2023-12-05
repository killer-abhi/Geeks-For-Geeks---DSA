#include<bits/stdc++.h>
using namespace std;

int findLongestSubstring(string text){
    int n=text.length(),res=0;

    vector<int> prev(256,-1);

    int i=0;
    for(int j=0;j<n;j++){
        i=max(i,prev[text[j]]+1);
        int maxEnd=j-i+1;
        res=max(res,maxEnd);
        prev[text[j]]=j;
    }
    return res;
}
int main()
{
    string text;
    cin>>text;
    cout<<"Maximum Length = "<<findLongestSubstring(text);
    return(0);
}