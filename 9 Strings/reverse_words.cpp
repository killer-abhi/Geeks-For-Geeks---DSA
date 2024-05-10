#include<bits/stdc++.h>
using namespace std;

void reverse(char str[],int start,int end){
    while(start<=end){
        swap(str[start],str[end]);
        start++;
        end--;
    }
}

void reverseWords(char str[],int n){
    int start=0;
    for(int end=0;end<n;end++){
        if(str[end]==' '){
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    reverse(str,start,n-1);
    reverse(str,0,n-1);
}
int main()
{
    char *str;
    cin>>str;
    reverseWords(str,strlen(str));
    cout<<"Reversed String is = "<<str;
    return(0);
}