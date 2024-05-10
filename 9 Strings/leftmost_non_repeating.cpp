#include<bits/stdc++.h>
using namespace std;
int findRepeating(string str){
    int count[26]={0};
    for(int i=0;i<str.length();i++){
        count[str[i]-'a']++;
    }
    for(int i=0;i<str.length();i++){
        if(count[str[i]-'a']==1){
            return i;
        }
    }
    return -1;
}
int main()
{
    string str;
    cin>>str;
    int res=findRepeating(str);
    if(res==-1){
        cout<<"All non-repeating Character";
    }
    else{
        cout<<"Leftmost Non Repeating character = "<<str[res];
    }
    return(0);
}