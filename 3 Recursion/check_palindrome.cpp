#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(string str){
    int len=str.length();
    if(len==0 || len==1){
        return true;
    }
    if(str[0]!=str[len-1]){
        return false;
    }
    return checkPalindrome(str.substr(1,len-2));
}
int main()
{
    string str;
    cin>>str;
    if(checkPalindrome(str)){
        cout<<"Palindrome String";
    }
    else{
        cout<<"Not a Palindrome String";
    }
    return(0);
}