#include<bits/stdc++.h>
using namespace std;

void printKMax(int *arr,int n,int k){
    deque<int> dq;
    for(int i=0;i<k;i++){
        while(!dq.empty()&&arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k;i<n;i++){
        cout<<arr[dq.front()]<<"\t";
        while(!dq.empty()&&dq.front()<=i-k){
            dq.pop_front();
        }
        while(!dq.empty()&&arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout<<arr[dq.front()];
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
    cout<<"Enter value of K :: ";
    int k;
    cin>>k;
    printKMax(arr,n,k);
    return(0);
}