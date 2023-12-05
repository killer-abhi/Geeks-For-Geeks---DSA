#include<bits/stdc++.h>
using namespace std;

bool areSame(int *arr1,int *arr2){
    for(int i=0;i<26;i++){
        if(arr1[i]!=arr2[i]){
            return false;
        }
    }
    return true;
}

bool checkAnagram(string text,string pat){
    int CT[26]={0};
    int CP[26]={0};

    for(int i=0;i<pat.length();i++){
        CT[text[i]]++;
        CP[pat[i]]++;
    }

    for(int i=pat.length();i<text.length();i++){
        if(areSame(CT,CP)){
            return true;
        }
        CT[text[i]]++;
        CT[text[i-pat.length()]]--;
    }
    return false;
}

int main()
{
    string text,pat;
    cin>>text>>pat;
    if(checkAnagram(text,pat)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return(0);
}