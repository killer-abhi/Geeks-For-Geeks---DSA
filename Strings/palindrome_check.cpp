#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string str){
    string rev=str;
    reverse(rev.begin(),rev.end());
    return rev==str;
}
bool isPalindrome(string str){
    int start=0;
    int end=str.length()-1;

    while(start<end){
        if(str[start]!=str[end]){
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int main()
{
    string str;
    cin>>str;
    if(isPalindrome(str)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return(0);
}