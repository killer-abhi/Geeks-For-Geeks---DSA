#include<bits/stdc++.h>
using namespace std;

// Naive Method
int isPrime(int n){
    if(n==1){
        return false;
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

// Most Efficient Solution

int is_Prime(int n){
    if(n==1||n%2==0||n%3==0){
        return false;
    }
    if(n==2||n==3){
        return true;
    }
    for(int i=5;i*i<=n;i=i+6){
        if(n%i==0||n%(i+2)==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(is_Prime(n)){
        cout<<"Prime Number"; 
    }
    else{
        cout<<"Composite Number";
    }
    return(0);
}