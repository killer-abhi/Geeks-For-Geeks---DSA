#include <bits/stdc++.h>
using namespace std;

void search(int **mat,int m,int n,int x){
    int i=0,j=n-1;

    while(i<m&&j>=0){
        if(mat[i][j]==x){
            cout<<"Element Found At :: "<<i<<"\t"<<j;
            return;
        }
        else if(mat[i][j]>x){
            j--;
        }
        else{
            i++;
        }
    }
}
void searchInSortedMatrix(int **mat, int m, int n, int x)
{
    int C = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (mat[i][C] == x)
        {
            cout << i << "\t" << n - 1;
            break;
        }
        else if (mat[i][C] > x)
        {
            C--;
            continue;
        }
        else
        {
            for (int j = 0; j < m; j++)
            {
                if(mat[j][C]==x){
                    cout<<j<<"\t"<<C;
                    break;
                }
            }
        }
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    int *arr[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x;
    cin >> x;
    search(arr,m,n,x);
    return (0);
}