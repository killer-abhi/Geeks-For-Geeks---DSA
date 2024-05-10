#include<bits/stdc++.h>
using namespace std;

struct DoubleStackArray{
    int *arr;
    int cap;
    int top1;
    int top2;
    DoubleStackArray(int s){
        arr=new int[s];
        top1=-1;
        top2=s;
        cap=s;
    }
    void push1(int x){
        if(top1<top2-1){
            top1++;
            arr[top1]=x;
        }
    }
    void push2(int x){
        if(top1<top2-1){
            top2--;
            arr[top2]=x;
        }
    }
    int pop1(){
        if(top1>0){
            int temp=arr[top1];
            top1--;
            return temp;

        }
    }
    int pop2(){
        if(top2<cap){
            int temp=arr[top2];
            top2++;
            return temp;

        }
    }
};
int main()
{
    
    return(0);
}