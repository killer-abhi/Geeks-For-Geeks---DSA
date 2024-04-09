#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

BinaryTree<int>* findLCA(BinaryTree<int> *root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->key==n1||root->key==n2){
        return root;
    }
    BinaryTree<int> *leftAns=findLCA(root->left,n1,n2);
    BinaryTree<int> *rightAns=findLCA(root->right,n1,n2);
    if(leftAns!=NULL&&rightAns!=NULL){
        return root;
    }
    else if(leftAns!=NULL){
        return leftAns;
    }
    else{
        return rightAns;
    }
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    int n1,n2;
    cout<<"Enter key Node 1 :: ";
    cin>>n1;    
    cout<<"Enter key Node 2 :: ";
    cin>>n2;    
    BinaryTree<int> *res=findLCA(root,n1,n2);
    cout<<"LCA :: "<<res->key;
    return(0);
}