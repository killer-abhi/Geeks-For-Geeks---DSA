#include<bits/stdc++.h>
using namespace std;

int intersection(int *arr1,int n1,int *arr2,int n2){
    unordered_map<int,int> myMap;
    for(int i=0;i<n1;i++){
        myMap[arr1[i]]=1;
    }
    for(int i=0;i<n2;i++){
        myMap[arr2[i]]++;
    }

    int count=0;
    for(auto it:myMap){
        if(it.second>1){
            count++;
        }
    }
    return count;
}
int main()
{
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    int n2;
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    cout<<"Total Common Elements = "<<intersection(arr1,n1,arr2,n2);
    return(0);
}