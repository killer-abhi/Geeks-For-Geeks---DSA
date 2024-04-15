#include<bits/stdc++.h>
#include "../Tree/BinaryTree.cpp"
using namespace std;

bool checkBST(BinaryTree<int> *root,int min,int max){
    if(root==NULL){
        return true;
    }
    if(root->key<min||root->key>max){
        return false;
    }
    return (checkBST(root->left,min,root->key)&&checkBST(root->right,root->key,max));
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    if(checkBST(root,INT_MIN,INT_MAX)){
        cout<<"It is a BST";
    }else{
        cout<<"Not a BST";
    }
    return(0);
}