#include <bits/stdc++.h>
using namespace std;

void printSpiral(int **mat, int m, int n)
{
    int top = 0, bottom = m - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right)
    {
        for (int i = 0; i <= right; i++)
        {
            cout << mat[top][i] << " ";
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            cout << mat[i][right] << " ";
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                cout << mat[bottom][i] << " ";
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                cout << mat[i][left] << " ";
            }
            left++;
        }
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    int *mat[m];
    for (int i = 0; i < m; i++)
    {
        mat[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    printSpiral(mat, m, n);
    return (0);
}