#include<bits/stdc++.h>
using namespace std;

void transposeOfMatrix(int **mat,int m){
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
}
void rotateAnticlockwise(int **mat,int n){
    transposeOfMatrix(mat,n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            swap(mat[i][j],mat[n-i-1][j]);
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int *mat[n];
    for(int i=0;i<n;i++)
    {
        mat[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    
}