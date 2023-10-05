#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    int res=min(a,b);
    while(res>0){
        if(a%res==0&&b%res==0){
            break;
        }
        res--;
    }
    return res;
}
int gcd_1(int a,int b){

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int gcd_2(int a,int b){
    if(b==0){
        return a;
    }
    return gcd_2(b,a%b);
}

int main()
{
    int a,b;
    cout<<"Enter number 1 :: ";
    cin>>a;
    cout<<"Enter number 2 :: ";
    cin>>b;
    cout<<gcd(a,b);
    cout<<gcd_1(a,b);
    cout<<gcd_2(a,b);
    return(0);
}