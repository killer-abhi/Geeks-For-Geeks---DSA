#include<bits/stdc++.h>
#include "BinaryTree.cpp"
using namespace std;

bool isChildrenSum(BinaryTree<int> *root){
    if(root==NULL){
        return true;
    }
    if(root->left!=NULL&&root->right!=NULL){
        return (root->left->key+root->right->key)==root->key?true:false;
    }
    if(root->left==NULL){
        return root->key==root->right->key?true:false;
    }
    if(root->right==NULL){
        return root->key==root->left->key?true:false;
    }
    return isChildrenSum(root->left)&&isChildrenSum(root->right);

}

int main()
{
    BinaryTree<int> *root=takeInputLevelWise();
    if(isChildrenSum(root)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }
    return(0);
}