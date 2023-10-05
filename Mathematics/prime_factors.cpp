#include<bits/stdc++.h>
using namespace std;

int isPrime(int n){
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

void primeFactors(int n){
    for(int i=2;i<n;i++){
        if(isPrime(n)){
            int x=i;
            while(n%x==0){
                cout<<i;
                x=x*i;
            }
        }
    }
}

void primeFactors(int n){
    if(n<=1){
        return;
    }
    for(int i=2;i*i<=n;i++){
        while(n%i==0){
            cout<<i;
            n=n/i;
        }
    }
    if(n>1){
        cout<<n;
    }
}
int main()
{
    int n;
    cin>>n;
    primeFactors(n);
    return(0);
}