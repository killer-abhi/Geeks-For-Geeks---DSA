#include<bits/stdc++.h>
using namespace std;

pair<int,int> findPairSum(int *arr,int n,int reqSum){
    pair<int,int> res={-1,-1};

    int leftP=0;
    int rightP=n-1;

    while(leftP<=rightP){
        int calcSum=arr[leftP]+arr[rightP];
        if(calcSum==reqSum){
            res.first=leftP;
            res.second=rightP;
            return res;
        }
        if(calcSum>reqSum){
            rightP--;
        }
        if(calcSum<reqSum){
            leftP++;
        }
        
    }
    return res;
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
    int sum;
    cout<<"Enter Sum :: ";
    cin>>sum;
    pair<int,int> res=findPairSum(arr,n,sum);
    if(res.first==-1){
        cout<<"No Pair Found";
    }
    else{
        cout<<"Pair Elements are - "<<arr[res.first]<<"\t"<<arr[res.second];
    }
    return(0);
}