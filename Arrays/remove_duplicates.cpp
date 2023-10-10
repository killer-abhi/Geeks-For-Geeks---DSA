#include<bits/stdc++.h>
using namespace std;

void removeKth(int *arr,int &n,int pos){
    for(int i=pos;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
}
void removeDuplicates(int *arr,int &n){

    int isFirst=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]==isFirst){
            arr[i]=-1;
            removeKth(arr,n,i);
        }
        else{
            isFirst=arr[i];
        }
    }
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    removeDuplicates(arr,n);
    cout<<"Remaining Elements are = "<<n<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return(0);
}