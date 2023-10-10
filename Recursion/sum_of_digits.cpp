#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int num){
    if(num<10){
        return num;
    }
    int lastDigit=num%10;
    return lastDigit+sumOfDigits(num/10);
}
int main()
{
    int n;
    cin>>n;
    cout<<"Sum Of Digits = "<<sumOfDigits(n);
    return(0);
}