#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string str){
    stack<char> brackets;
    for(int i=0;i<str.length();i++){
        if(str[i]=='('||str[i]=='{'||str[i]=='['){
            brackets.push(str[i]);
        }
        else if(str[i]==')'||str[i]=='}'||str[i]==']'){
            char top=brackets.top();
            if(str[i]==')'&&top=='('){
                brackets.pop();
            }
            else if(str[i]=='}'&&top=='{'){
                brackets.pop();
            }
            else if(str[i]==']'&&top=='['){
                brackets.pop();
            }
            else{
                return false;
            }
        }
    }
    return brackets.empty();
};

int main()
{
    string str;
    cout<<"Enter any string :: "; 
    cin>>str;
    if(isBalanced(str)){
        cout<<"Balanced parenthesis.";
    }else{
        cout<<"Unbalanced parenthesis.";
    }
    return(0);
}