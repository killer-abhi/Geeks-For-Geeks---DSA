#include<bits/stdc++.h>
using namespace std;
void boundaryTraversal(int **arr,int m,int n){
    for(int i=0;i<n;i++){
        cout<<arr[0][i]<<" ";
    }
    for(int i=1;i<m;i++){
        cout<<arr[i][n-1]<<" ";
    }
    for(int i=n-2;i>0;i--){
        cout<<arr[m-1][i]<<" ";
    }
    for(int i=m-1;i>0;i--){
        cout<<arr[i][0]<<" ";
    }
}
int main()
{
    int m,n;
    cin>>m>>n;
    int *arr[m];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    boundaryTraversal(arr,m,n);
    return(0);
}