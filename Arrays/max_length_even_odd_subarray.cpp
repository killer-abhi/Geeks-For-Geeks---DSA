#include<bits/stdc++.h>
using namespace std;

bool isEven(int x){
    return x%2==0;
}

int maxLengthEvenOdd(int *arr,int n){

    int currLength=1;
    int check=isEven(arr[0]);
    int maxLength=1;
    for(int i=1;i<n;i++){
        if(check==isEven(arr[i])){
            maxLength=max(currLength,maxLength);
            currLength=1;
        }
        else{
            currLength++;
            check=!check;
        }
    }

    return maxLength;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Maximum Length Even Odd Subarray = "<<maxLengthEvenOdd(arr,n);
    return(0);
}