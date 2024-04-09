#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

int findMaximum(BinaryTree<int> *root){
    if(root==NULL){
        return INT_MIN;
    }

    return max(root->key,max(findMaximum(root->left),findMaximum(root->right)));
}
int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    cout<<"Maximum Key = "<<findMaximum(root);
    return(0);
}