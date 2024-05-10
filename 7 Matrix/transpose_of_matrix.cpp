#include<bits/stdc++.h>
using namespace std;

void transposeOfMatrix(int **mat,int m){
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            swap(mat[i][j],mat[j][i]);
        }
    }
}
int main()
{
    int m;
    cin>>m;
    int *mat[m];
    for(int i=0;i<m;i++)
    {
        mat[i]=new int[m];
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    transposeOfMatrix(mat,m);
    
    return(0);
}