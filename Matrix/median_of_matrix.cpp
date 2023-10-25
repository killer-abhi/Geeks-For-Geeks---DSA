#include<bits/stdc++.h>
using namespace std;

void bucketSort(int *arr,int n,int bucketCount=5){
    int max_val=arr[0];
    for(int i=1;i<n;i++){
        max_val=max(max_val,arr[i]);
    }
    max_val++;

    vector<int> b[bucketCount];
    for(int i=0;i<n;i++){
        int bi=(bucketCount*arr[i])/max_val;
        b[bi].push_back(arr[i]);
    }
    for(int i=0;i<bucketCount;i++){
        sort(b[i].begin(),b[i].end());
    }
    int index=0;
    for(int i=0;i<bucketCount;i++){
        for(int j=0;j<b[i].size();j++){
            arr[index]=b[i][j];
            index++;
        }
    }
}
void findMedian(int **mat,int m,int n){
    int arrSize=m*n;
    int arr[arrSize];
    int count=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[count]=mat[i][j];
            count++;
        }
    }
    bucketSort(arr,arrSize);
    float median=arr[arrSize/2];
    if(m%2==0||n%2==0){
        median=(arr[(arrSize/2)-1]+arr[arrSize/2])/2;
    }
    cout<<"Median Of Given Matrix Is :: "<<median;
}

int main()
{
    int m,n;
    cin>>m>>n;
    int *arr[m];
    for(int i=0;i<m;i++)
    {   
        arr[i]=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    findMedian(arr,m,n);
    return(0);
}