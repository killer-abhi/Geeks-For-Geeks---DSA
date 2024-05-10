#include<bits/stdc++.h>
#include "gcd.cpp"
using namespace std;
int lcm(int a,int b){
    int res=max(a,b);
    while(1){
        if(res%a==0&&res%b==0){
            return res;
        }
        res++;
    }
    return res;
}
int lcm_1(int a,int b){
    int gcd=gcd_2(a,b);
    return (a*b)/gcd;
}
int main()
{
    int a,b;
    cout<<"Enter number 1 :: ";
    cin>>a;
    cout<<"Enter number 2 :: ";
    cin>>b;
    cout<<lcm(a,b);
    cout<<lcm_1(a,b);
    return(0);
}