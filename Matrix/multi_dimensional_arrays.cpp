#include<bits/stdc++.h>
using namespace std;
int main()
{
    // 2D array Initialization
    int arr1[2][3] = {{1,2,3},{4,5,6}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // Valid Initialization
    int arr2[3][2] = {10,20,30,40,50,60};
    int arr3[][2] = {10,20,30,40,50,60};

    // Multi Dimensional Array
    int arr4[][3][2] = {
        {{1,2},{3,4},{5,6}},
        {{7,8},{9,10},{11,12}}
    };

    // Variable Sized Array

    int m=3,n=2;
    int arr5[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr5[i][j];
        }
    }

    // Double Pointer

    int **arr6;
    arr6=new int*[m];
    for(int i=0;i<m;i++)
    {
        arr6[i]=new int[n];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr6[i][j];
        }
    }

    // Array of Pointers
    int *arr7[m];
    for(int i=0;i<m;i++)
    {
        arr7[i]=new int[n];
    }

    // Array of Vectors
    vector<int> arr8[m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr8[i].push_back(10);
        }
    }

    // Vector of Vectors

    vector<vector<int>> arr9;
    for(int i=0;i<m;i++)
    {
        vector<int> v;
        for(int j=0;j<n;j++)
        {
            v.push_back(10);
        }
        arr9.push_back(v);
    }

    // displaying data from vector of vectors
    for(int i=0;i<arr9.size();i++){
        for(int j=0;j<arr9[i].size();j++){
            cout<<arr9[i][j]<<" ";
        }
        cout<<endl;
    }
    return(0);
}