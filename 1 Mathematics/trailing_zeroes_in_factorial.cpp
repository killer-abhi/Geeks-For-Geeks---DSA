#include<bits/stdc++.h>

using namespace std;

int count_Zeroes(int n){

    int res=0;
    for(int i=5;i<=n;i=i*5){
        res=res+(n/i);
    }
    return res;
}

int main()
{
    int n;
    cout<<"Enter any number :: ";
    cin>>n;
    int zeroes=count_Zeroes(n);
    cout<<"\n Requires zeroes = "<<zeroes; 
    return(0);
}