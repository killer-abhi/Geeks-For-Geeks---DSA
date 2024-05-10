#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s1,string s2){

    int i=0;
    int j=0;

    while(i<s1.length()&&j<s2.length()){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else{
            i++;
        }
    }

    return j==s2.length();
    
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if(isSubsequence(s1,s2)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return(0);
}