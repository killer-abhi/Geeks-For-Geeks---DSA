#include<bits/stdc++.h>
using namespace std;

void printFrequencies(string str){
    int count[26]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count[i]>0){
            cout<<(char)(i+'a')<<'\t'<<count[i]<<endl;
        }
    }
}
int main()
{
    string str;
    cin>>str;
    printFrequencies(str);
    return(0);
}