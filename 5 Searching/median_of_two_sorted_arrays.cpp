#include <bits/stdc++.h>
using namespace std;

float findMedian(int *arr1, int n1, int *arr2, int n2)
{
    int finalArray[n1 + n2];
    int i = 0, j = 0;
    int count = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            finalArray[count] = arr1[i];
            i++;
        }
        else
        {
            finalArray[count] = arr2[j];
            j++;
        }
        count++;
    }
    while (i < n1)
    {
        finalArray[count] = arr1[i];
        i++;
        count++;
    }
    while (j < n2)
    {
        finalArray[count] = arr2[j];
        j++;
        count++;
    }
    cout<<endl;
    for(int k=0;k<n1+n2;k++){
        cout<<finalArray[k]<<'\t';
    }
    int medianIndex = ((n1 + n2) / 2)-1;
    if ((n1 + n2) % 2 == 0)
    {
        return (finalArray[medianIndex] + finalArray[medianIndex + 1]) / 2;
    }
    return finalArray[medianIndex];
}

int main()
{
    int n1;
    cin >> n1;
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    int n2;
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    float median=findMedian(arr1,n1,arr2,n2);
    cout<<" Median = "<<median;
    return (0);
}