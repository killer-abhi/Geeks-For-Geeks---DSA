#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

void printNodesAtDistK(BinaryTree<int> *root,int k){
    if(root==NULL){
        return ;
    }
    if(k==0){
        cout<<root->key;
    }
    else{
        printNodesAtDistK(root->left,k-1);
        printNodesAtDistK(root->right,k-1);
    }
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    int k;
    cout<<"Enter value of distance K :: ";
    cin>>k;
    printNodesAtDistK(root,k);
    return(0);
}