#include<bits/stdc++.h>
using namespace std;

//Naive Solution 
// Time Complexity = O(total bits in number)
int countSetBits(int x){

    int res=0;
    while(x>0){
        res=res+(x&1);
        x=x>>1;
    }
    return res;
}

// Brian Kerningam's Algorithm
// time complexity=O(set bit count)

int countBits(int x){
    int res=0;
    while(x>0){
        x=(x&(x-1));
        res++;
    }
    return res;
}

int main()
{
    int x;
    cin>>x;
    cout<<"Set Bits = "<<countSetBits(x);
    return(0);
}