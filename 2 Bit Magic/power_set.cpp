#include<bits/stdc++.h>
using namespace std;

void powerSet(string word){
    int n=word.length();
    int powSize=pow(2,n);

    for(int counter=0;counter<powSize;counter++){

        for(int j=0;j<n;j++){
            if(counter&(1<<j)!=0){
                cout<<word[j];
            }
        }
        cout<<'\n';
    }
}
int main()
{
    string str;
    cin>>str;
    powerSet(str);
    return(0);
}