#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

int findHeight(BinaryTree<int> *root){
    if(root==NULL){
        return 0;
    }
    return 1+max(findHeight(root->left),findHeight(root->right));
}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    cout<<endl<<findHeight(root);
    return(0);
}